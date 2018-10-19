//
//  CTMediator+Author.h
//  Pods-ZYAuthorKit_Category_Example
//
//  Created by 马静娜 on 2018/10/19.
//

#import <CTMediator/CTMediator.h>

#import <ZYAPIsKit/APIRequest.h>

#import <ZYAPIsKit/FFReformProtocol.h>

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTMediator (Author)

- (UIViewController*)authorDetailViewController;

- (NSDictionary*)authorReformerWithOriginData:(NSDictionary*)data;

- (NSDictionary *)authorReformer;

- (APIRequest*)authorAPIRequest;

@end

NS_ASSUME_NONNULL_END
