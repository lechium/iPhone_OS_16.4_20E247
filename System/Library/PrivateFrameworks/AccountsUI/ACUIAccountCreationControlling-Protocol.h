//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccountsUI/NSObject-Protocol.h>

@class PSSpecifier, PSViewController;

@protocol ACUIAccountCreationControlling <NSObject>
- (void)beginAccountCreationWithSpecifier:(PSSpecifier *)arg1 fromViewController:(PSViewController *)arg2 completion:(void (^)(ACAccount *, long long, NSDictionary *))arg3;
@end
