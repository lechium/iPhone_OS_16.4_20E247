//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class NSArray;
@protocol HMDFollowUpItem;

@protocol HMDFollowUpController <NSObject>
- (void)clearPendingFollowUpItemsWithUniqueIdentifiers:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)pendingFollowUpItemsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)postFollowUpItem:(id <HMDFollowUpItem>)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end
