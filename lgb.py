import numpy as np
import lightgbm as lgb

data = np.random.rand(500, 10)  # 500 entities, each contains 10 features
label = np.random.randint(2, size=500)  # binary target
train_data = lgb.Dataset(data, label=label)

param = {'num_leaves': 31, 'objective': 'binary'}
param['metric'] = 'auc'

num_round = 10
bst = lgb.train(param, train_data, num_round)

bst.save_model('model.txt')



