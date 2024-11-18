{"metadata":{"kernelspec":{"display_name":"Python 3","language":"python","name":"python3"},"language_info":{"name":"python","version":"3.10.14","mimetype":"text/x-python","codemirror_mode":{"name":"ipython","version":3},"pygments_lexer":"ipython3","nbconvert_exporter":"python","file_extension":".py"},"kaggle":{"accelerator":"none","dataSources":[{"sourceId":10211,"databundleVersionId":111096,"sourceType":"competition"},{"sourceId":15520,"sourceType":"datasetVersion","datasetId":11167},{"sourceId":38454,"sourceType":"datasetVersion","datasetId":2709}],"isInternetEnabled":false,"language":"python","sourceType":"notebook","isGpuEnabled":false}},"nbformat_minor":4,"nbformat":4,"cells":[{"cell_type":"markdown","source":"**This notebook is an exercise in the [Introduction to Machine Learning](https://www.kaggle.com/learn/intro-to-machine-learning) course.  You can reference the tutorial at [this link](https://www.kaggle.com/dansbecker/your-first-machine-learning-model).**\n\n---\n","metadata":{"jupyter":{"source_hidden":true}}},{"cell_type":"markdown","source":"## Recap\nSo far, you have loaded your data and reviewed it with the following code. Run this cell to set up your coding environment where the previous step left off.","metadata":{}},{"cell_type":"code","source":"# Code you have previously used to load data\nimport pandas as pd\n\n# Path of the file to read\niowa_file_path = '../input/home-data-for-ml-course/train.csv'\n\nhome_data = pd.read_csv(iowa_file_path)\n\n# Set up code checking\nfrom learntools.core import binder\nbinder.bind(globals())\nfrom learntools.machine_learning.ex3 import *\n\nprint(\"Setup Complete\")","metadata":{"trusted":true,"execution":{"iopub.status.busy":"2024-11-17T12:32:15.791587Z","iopub.execute_input":"2024-11-17T12:32:15.792171Z","iopub.status.idle":"2024-11-17T12:32:17.459442Z","shell.execute_reply.started":"2024-11-17T12:32:15.792106Z","shell.execute_reply":"2024-11-17T12:32:17.457784Z"}},"outputs":[{"name":"stdout","text":"Setup Complete\n","output_type":"stream"}],"execution_count":1},{"cell_type":"markdown","source":"# Exercises\n\n## Step 1: Specify Prediction Target\nSelect the target variable, which corresponds to the sales price. Save this to a new variable called `y`. You'll need to print a list of the columns to find the name of the column you need.\n","metadata":{}},{"cell_type":"code","source":"# print the list of columns in the dataset to find the name of the prediction target\ny = home_data.SalePrice\nstep_1.check()","metadata":{"trusted":true,"execution":{"iopub.status.busy":"2024-11-17T12:34:42.683840Z","iopub.execute_input":"2024-11-17T12:34:42.684704Z","iopub.status.idle":"2024-11-17T12:34:42.696817Z","shell.execute_reply.started":"2024-11-17T12:34:42.684657Z","shell.execute_reply":"2024-11-17T12:34:42.695047Z"}},"outputs":[{"output_type":"display_data","data":{"text/plain":"<IPython.core.display.Javascript object>","application/javascript":"parent.postMessage({\"jupyterEvent\": \"custom.exercise_interaction\", \"data\": {\"outcomeType\": 1, \"valueTowardsCompletion\": 0.25, \"interactionType\": 1, \"questionType\": 2, \"questionId\": \"1_SetTarget\", \"learnToolsVersion\": \"0.3.4\", \"failureMessage\": \"\", \"exceptionClass\": \"\", \"trace\": \"\"}}, \"*\")"},"metadata":{}},{"output_type":"display_data","data":{"text/plain":"Correct","text/markdown":"<span style=\"color:#33cc33\">Correct</span>"},"metadata":{}}],"execution_count":8},{"cell_type":"code","source":"y = home_data.SalePrice\n\n# Check your answer\nstep_1.check()","metadata":{"trusted":true,"execution":{"iopub.status.busy":"2024-11-17T12:34:54.667536Z","iopub.execute_input":"2024-11-17T12:34:54.668923Z","iopub.status.idle":"2024-11-17T12:34:54.680315Z","shell.execute_reply.started":"2024-11-17T12:34:54.668835Z","shell.execute_reply":"2024-11-17T12:34:54.678729Z"}},"outputs":[{"output_type":"display_data","data":{"text/plain":"<IPython.core.display.Javascript object>","application/javascript":"parent.postMessage({\"jupyterEvent\": \"custom.exercise_interaction\", \"data\": {\"outcomeType\": 1, \"valueTowardsCompletion\": 0.25, \"interactionType\": 1, \"questionType\": 2, \"questionId\": \"1_SetTarget\", \"learnToolsVersion\": \"0.3.4\", \"failureMessage\": \"\", \"exceptionClass\": \"\", \"trace\": \"\"}}, \"*\")"},"metadata":{}},{"output_type":"display_data","data":{"text/plain":"Correct","text/markdown":"<span style=\"color:#33cc33\">Correct</span>"},"metadata":{}}],"execution_count":9},{"cell_type":"code","source":"# The lines below will show you a hint or the solution.\n# step_1.hint() \n# step_1.solution()","metadata":{"collapsed":true,"jupyter":{"outputs_hidden":true}},"outputs":[],"execution_count":null},{"cell_type":"markdown","source":"## Step 2: Create X\nNow you will create a DataFrame called `X` holding the predictive features.\n\nSince you want only some columns from the original data, you'll first create a list with the names of the columns you want in `X`.\n\nYou'll use just the following columns in the list (you can copy and paste the whole list to save some typing, though you'll still need to add quotes):\n  * LotArea\n  * YearBuilt\n  * 1stFlrSF\n  * 2ndFlrSF\n  * FullBath\n  * BedroomAbvGr\n  * TotRmsAbvGrd\n\nAfter you've created that list of features, use it to create the DataFrame that you'll use to fit the model.","metadata":{}},{"cell_type":"code","source":"# Create the list of features below\nfeature_names = ___\n\n# Select data corresponding to features in feature_names\nX = ____\n\n# Check your answer\nstep_2.check()","metadata":{"collapsed":true,"jupyter":{"outputs_hidden":true}},"outputs":[],"execution_count":null},{"cell_type":"code","source":"# step_2.hint()\n# step_2.solution()","metadata":{"collapsed":true,"jupyter":{"outputs_hidden":true}},"outputs":[],"execution_count":null},{"cell_type":"markdown","source":"## Review Data\nBefore building a model, take a quick look at **X** to verify it looks sensible","metadata":{}},{"cell_type":"code","source":"# Review data\n# print description or statistics from X\n#print(_)\n\n# print the top few lines\n#print(_)","metadata":{"collapsed":true,"jupyter":{"outputs_hidden":true}},"outputs":[],"execution_count":null},{"cell_type":"markdown","source":"## Step 3: Specify and Fit Model\nCreate a `DecisionTreeRegressor` and save it iowa_model. Ensure you've done the relevant import from sklearn to run this command.\n\nThen fit the model you just created using the data in `X` and `y` that you saved above.","metadata":{}},{"cell_type":"code","source":"# from _ import _\n#specify the model. \n#For model reproducibility, set a numeric value for random_state when specifying the model\niowa_model = ____\n\n# Fit the model\n____\n\n# Check your answer\nstep_3.check()","metadata":{"collapsed":true,"jupyter":{"outputs_hidden":true}},"outputs":[],"execution_count":null},{"cell_type":"code","source":"# step_3.hint()\n# step_3.solution()","metadata":{"collapsed":true,"jupyter":{"outputs_hidden":true}},"outputs":[],"execution_count":null},{"cell_type":"markdown","source":"## Step 4: Make Predictions\nMake predictions with the model's `predict` command using `X` as the data. Save the results to a variable called `predictions`.","metadata":{}},{"cell_type":"code","source":"predictions = ____\nprint(predictions)\n\n# Check your answer\nstep_4.check()","metadata":{"collapsed":true,"jupyter":{"outputs_hidden":true}},"outputs":[],"execution_count":null},{"cell_type":"code","source":"# step_4.hint()\n# step_4.solution()","metadata":{"collapsed":true,"jupyter":{"outputs_hidden":true}},"outputs":[],"execution_count":null},{"cell_type":"markdown","source":"## Think About Your Results\n\nUse the `head` method to compare the top few predictions to the actual home values (in `y`) for those same homes. Anything surprising?\n","metadata":{}},{"cell_type":"code","source":"# You can write code in this cell\n","metadata":{},"outputs":[],"execution_count":null},{"cell_type":"markdown","source":"It's natural to ask how accurate the model's predictions will be and how you can improve that. That will be you're next step.\n\n# Keep Going\n\nYou are ready for **[Model Validation](https://www.kaggle.com/dansbecker/model-validation).**\n","metadata":{}},{"cell_type":"markdown","source":"---\n\n\n\n\n*Have questions or comments? Visit the [course discussion forum](https://www.kaggle.com/learn/intro-to-machine-learning/discussion) to chat with other learners.*","metadata":{}}]}