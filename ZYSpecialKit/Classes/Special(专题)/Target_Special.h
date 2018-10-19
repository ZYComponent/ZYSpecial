//
//  Target_Special.h
//  ZYSpecialKit
//
//  Created by 马静娜 on 2018/10/19.
//

#import <Foundation/Foundation.h>

#import "ZYSpecialKit.h"

NS_ASSUME_NONNULL_BEGIN

@interface Target_Special : NSObject

- (UIViewController*)Action_specialDetailViewController:(NSDictionary*)params;

- (NSDictionary*)Action_specialReformerWithOriginData:(NSDictionary*)params;

- (NSDictionary *)Action_specialReformer:(NSDictionary*)params;

- (APIRequest*)Action_specialAPIRequest:(NSDictionary*)params;

@end

NS_ASSUME_NONNULL_END
