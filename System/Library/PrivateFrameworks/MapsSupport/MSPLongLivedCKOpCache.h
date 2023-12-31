//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface MSPLongLivedCKOpCache : NSObject
{
    NSUserDefaults *_defaults;	// 8 = 0x8
    NSMutableSet *_currentOpIDs;	// 16 = 0x10
}

+ (id)sharedCache;	// IMP=0x006000000007dc43
- (void).cxx_destruct;	// IMP=0x000000000007ed52
@property(retain, nonatomic) NSMutableSet *currentOpIDs; // @synthesize currentOpIDs=_currentOpIDs;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
- (_Bool)isCurrentOperationID:(id)arg1;	// IMP=0x000000000007ec73
- (_Bool)isAwareOfOperationID:(id)arg1;	// IMP=0x000000000007ea30
- (_Bool)hasOperationID:(id)arg1 forType:(id)arg2;	// IMP=0x000000000007e96f
- (void)pruneOperationsToIDs:(id)arg1;	// IMP=0x000000000007e6b3
- (void)removeOperation:(id)arg1 forType:(id)arg2;	// IMP=0x000000000007e528
- (void)addOperation:(id)arg1 forType:(id)arg2;	// IMP=0x000000000007e39d
- (void)_setOperationIDs:(id)arg1 forType:(id)arg2;	// IMP=0x000000000007e04e
- (id)_operationIDsForType:(id)arg1;	// IMP=0x000000000007dfcb
- (id)_operationIDsByType;	// IMP=0x000000000007dd75
- (id)init;	// IMP=0x000000000007dcc8

@end

