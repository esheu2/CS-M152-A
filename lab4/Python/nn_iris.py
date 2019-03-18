# Backprop on the Seeds Dataset
#back propagation design made with help from
#https://machinelearningmastery.com/implement-backpropagation-algorithm-scratch-python/
from random import seed
from random import randrange
from random import random
from csv import reader
from math import exp
import sys

# Initialize the neural network
def initialize_network(n_inputs, n_hidden, n_outputs):
	network = list()
	hidden_layer = [{'weights':[random() for i in range(n_inputs + 1)]} for i in range(n_hidden)]
	network.append(hidden_layer)
	output_layer = [{'weights':[random() for i in range(n_hidden + 1)]} for i in range(n_outputs)]
	network.append(output_layer)
	return network

# Calculate neuron activation for an input
def activate(weights, inputs):
	activation = weights[-1]
	for i in range(len(weights)-1):
		activation += weights[i] * inputs[i]
	return activation

# Transfer neuron activation
def transfer(activation):
	return 1.0 / (1.0 + exp(-activation))
	#return activation/(1+abs(activation))
	#return max(0.0, activation)

# Forward propagate input to a network output
def forward_propagate(network, row):
	inputs = row
	for layer in network:
		new_inputs = []
		for neuron in layer:
			activation = activate(neuron['weights'], inputs)
			neuron['output'] = transfer(activation)
			new_inputs.append(neuron['output'])
		inputs = new_inputs
	return inputs

# Calculate the derivative of an neuron output
def transfer_derivative(output):
	return output * (1.0 - output)
    # if output <= 0:
    #     return 0
    # else:
    #     return 1

# Backpropagate error and store in neurons
def backward_propagate_error(network, expected):
	for i in reversed(range(len(network))):
		layer = network[i]
		errors = list()
		if i != len(network)-1:
			for j in range(len(layer)):
				error = 0.0
				for neuron in network[i + 1]:
					error += (neuron['weights'][j] * neuron['delta'])
				errors.append(error)
		else:
			for j in range(len(layer)):
				neuron = layer[j]
				errors.append(expected[j] - neuron['output'])
		for j in range(len(layer)):
			neuron = layer[j]
			neuron['delta'] = errors[j] * transfer_derivative(neuron['output'])

# Update network weights with error
def update_weights(network, row, l_rate):
	for i in range(len(network)):
		inputs = row[:-1]
		if i != 0:
			inputs = [neuron['output'] for neuron in network[i - 1]]
		for neuron in network[i]:
			for j in range(len(inputs)):
				neuron['weights'][j] += l_rate * neuron['delta'] * inputs[j]
			neuron['weights'][-1] += l_rate * neuron['delta']

# Train a network for a fixed number of epochs
def train_network(network, train, l_rate, n_epoch, n_outputs):
	for epoch in range(n_epoch):
		for row in train:
			outputs = forward_propagate(network, row)
			expected = [0 for i in range(n_outputs)]
			expected[row[-1]] = 1
			backward_propagate_error(network, expected)
			update_weights(network, row, l_rate)

# Make a prediction with a network
def predict(network, row):
	outputs = forward_propagate(network, row)
	return outputs.index(max(outputs))

# Rescale dataset columns to the range 0-1
def normalize_dataset(dataset, minmax):
	for row in dataset:
		for i in range(len(row)-1):
			row[i] = (row[i] - minmax[i][0]) / (minmax[i][1] - minmax[i][0])

# Split a dataset into k folds
def cross_validation_split(dataset, n_folds):
	dataset_split = list()
	dataset_copy = list(dataset)
	fold_size = int(len(dataset) / n_folds)
	for i in range(n_folds):
		fold = list()
		while len(fold) < fold_size:
			index = randrange(len(dataset_copy))
			fold.append(dataset_copy.pop(index))
		dataset_split.append(fold)
	return dataset_split

# Calculate accuracy percentage
def accuracy_metric(actual, predicted):
	correct = 0
	for i in range(len(actual)):
		if actual[i] == predicted[i]:
			correct += 1
	return correct / float(len(actual)) * 100.0

# Backpropagation Algorithm With Stochastic Gradient Descent
def back_propagation(train, test, l_rate, n_epoch, n_hidden):
	n_inputs = len(train[0]) - 1
	n_outputs = len(set([row[-1] for row in train]))
	network = initialize_network(n_inputs, n_hidden, n_outputs)
	train_network(network, train, l_rate, n_epoch, n_outputs)
	# for layer in network:
		# print(layer)
	predictions = list()
	for row in test:
		prediction = predict(network, row)
		predictions.append(prediction)
	# print(predict(network, [3,3,5,2]))
	# print(predict(network, [5,3,1,1]))
	# print(predict(network, [9,3,5,2]))
	return(predictions)

# Evaluate an algorithm using a cross validation split
def evaluate_algorithm(dataset, algorithm, n_folds, *args):
	folds = cross_validation_split(dataset, n_folds)
	scores = list()
	for fold in folds:
		train_set = list(folds)
		train_set.remove(fold)
		train_set = sum(train_set, [])
		test_set = list()
		for row in fold:
			row_copy = list(row)
			test_set.append(row_copy)
			row_copy[-1] = None
		predicted = algorithm(train_set, test_set, *args)
		actual = [row[-1] for row in fold]
		accuracy = accuracy_metric(actual, predicted)
		scores.append(accuracy)
	return scores

# Convert string column to float
def str_column_to_float(dataset, column):
	for row in dataset:
		row[column] = float(row[column].strip())

# Convert string column to integer
def str_column_to_int(dataset, column):
	class_values = [row[column] for row in dataset]
	unique = set(class_values)
	lookup = dict()
	for i, value in enumerate(unique):
		lookup[value] = i
	for row in dataset:
		row[column] = lookup[row[column]]
	return lookup

# Find the min and max values for each column
def dataset_minmax(dataset):
	minmax = list()
	stats = [[min(column), max(column)] for column in zip(*dataset)]
	return stats

if __name__ == '__main__':
	# # Test Backprop on Seeds dataset
	# seed(1)
	# # load and prepare data
	# filename = 'iris.data'
	# dataset = list()
	# with open(filename, 'r') as file:
	# 	csv_reader = reader(file)
	# 	for row in csv_reader:
	# 		if not row:
	# 			continue
	# 		dataset.append(row)
	# for i in range(len(dataset[0])-1):
	# 	str_column_to_float(dataset, i)
	# # convert class column to integers
	# str_column_to_int(dataset, len(dataset[0])-1)
	# # normalize input variables
	# minmax = dataset_minmax(dataset)
	# normalize_dataset(dataset, minmax)
	# # evaluate algorithm
	# n_folds = 2
	# l_rate = 0.7
	# n_epoch = 700
	# n_hidden = 4
	# scores = evaluate_algorithm(dataset, back_propagation, n_folds, l_rate, n_epoch, n_hidden)
	# print('Scores: %s' % scores)
	# print('Mean Accuracy: %.3f%%' % (sum(scores)/float(len(scores))))

	############################################################################
	###					OUR NEURAL NETWORK SAVED WEIGHTS					 ###
	###					ALSO SAME WEIGHTS ON FPGA  					 		 ###
	############################################################################
	network = [[{'weights': [-6.619698014775393, 0.14816038218523198, 13.481705863330118, 6.866961833462174, -9.761376971451698], 'output': 0.17583587375029558, 'delta': -0.0003872769482564348}, {'weights': [-2.1193246933801424, 5.692111131477705, -6.559024830036, -6.553844543814401, 1.340425971998037], 'output': 0.008461097182820313, 'delta': -2.1774298317025784e-05}, {'weights': [-6.2232903294514035, -0.25377470957500314, 12.496344118550223, 6.591091794856105, -9.061680462052642], 'output': 0.17359001404156554, 'delta': -0.00033594262507704307}, {'weights': [-4.26070605383649, 0.2516912626206531, 8.53819284731363, 4.088931130814275, -6.242447972539372], 'output': 0.24024161933899346, 'delta': -0.00026251437429973567}], [{'weights': [-2.949945207282627, 8.351682999775006, -4.42101347299564, -3.0885481110734254, -3.430900695766523], 'output': 0.004548640126920955, 'delta': -2.0596015062312926e-05}, {'weights': [-7.837977039484703, -12.273251032755256, -6.398053182569766, -3.7397670928484947, 7.641569037796556], 'output': 0.9844841369511549, 'delta': 0.00023700668615298152}, {'weights': [7.061525119777891, -3.9154155325845745, 7.391813035904674, 4.964367877691353, -8.165233981066413], 'output': 0.01119750696790922, 'delta': -0.0001239801722653964}]]

	print("Iris Species Prediction Neural Network.\n")
	print("Input data when prompted.\n")
	print("Species:                Id:\n")
	print("Iris Setosa             0\n")
	print("Iris Versicolour        1\n")
	print("Iris Virginica          2\n")
	while True:
		sw = input("Sepal Width:")
		sl = input("Sepal Length:")
		pw = input("Pedal Width:")
		pl = input("Pedal Length:")
		prediction = predict(network, [float(sw), float(sl), float(pw), float(pl)])
		print("Predicted Species %s.\n" % prediction)
	# print(predict(network, [0,0,0,0]))
	# print(predict(network, [5,3,1,6]))
	# print(predict(network, [5,3,1,1]))
	# print(predict(network, [9,9,9,9]))
