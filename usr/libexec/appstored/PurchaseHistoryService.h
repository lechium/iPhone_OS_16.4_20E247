//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PurchaseHistoryService : NSObject
{
}

- (void)updateWithContext:(unsigned long long)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0040000000208911
- (void)updateForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000208883
- (void)showAllWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000020880a
- (void)setHidden:(_Bool)arg1 forStoreItemID:(long long)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000020877c
- (void)executeQuery:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002085b4

@end
