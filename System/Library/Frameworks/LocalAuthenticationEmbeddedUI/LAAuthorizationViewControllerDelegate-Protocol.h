//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationEmbeddedUI/NSObject-Protocol.h>

@class LAAuthorizationViewController;

@protocol LAAuthorizationViewControllerDelegate <NSObject>

@optional
- (void)authorizationController:(LAAuthorizationViewController *)arg1 didProvideAuthorizationRequirementWithReply:(void (^)(NSError *))arg2;
@end

