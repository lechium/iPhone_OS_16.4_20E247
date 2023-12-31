//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface NNArticleIdentifierSyncManager : NSObject
{
    NSSet *_synchronizedKeys;	// 8 = 0x8
    NSString *_readonlyResetKey;	// 16 = 0x10
    NSString *_readonlyKey;	// 24 = 0x18
    NSString *_readwriteResetKey;	// 32 = 0x20
    NSString *_readwriteKey;	// 40 = 0x28
}

+ (id)seenManager;	// IMP=0x0040000000007c5e
+ (id)savedManager;	// IMP=0x0010000000007bdd
- (void).cxx_destruct;	// IMP=0x002000000000913b
@property(readonly, nonatomic) NSString *readwriteKey; // @synthesize readwriteKey=_readwriteKey;
@property(readonly, nonatomic) NSString *readwriteResetKey; // @synthesize readwriteResetKey=_readwriteResetKey;
@property(readonly, nonatomic) NSString *readonlyKey; // @synthesize readonlyKey=_readonlyKey;
@property(readonly, nonatomic) NSString *readonlyResetKey; // @synthesize readonlyResetKey=_readonlyResetKey;
@property(readonly, nonatomic) NSSet *synchronizedKeys; // @synthesize synchronizedKeys=_synchronizedKeys;
- (id)_readwriteResetDate;	// IMP=0x0010000000009040
- (id)_readonlyResetDate;	// IMP=0x0010000000008f77
- (id)_lookupIdentifiersForKey:(id)arg1;	// IMP=0x0010000000008c2a
- (id)_readwriteArticleStateLookup;	// IMP=0x0010000000008bcb
- (id)_readonlyArticleStateLookup;	// IMP=0x0010000000008b6c
- (void)_makeIdentifier:(id)arg1 active:(_Bool)arg2;	// IMP=0x0010000000008a35
@property(readonly, nonatomic) NSSet *readonlyArticleIdentifiers;
@property(readonly, nonatomic) NSSet *articleIdentifiers;
- (void)removeIdentifier:(id)arg1;	// IMP=0x0010000000008087
- (void)addIdentifier:(id)arg1;	// IMP=0x0010000000008070
- (void)synchronize;	// IMP=0x0010000000007fed
- (void)clearAllIdentifiers;	// IMP=0x0010000000007ebd
- (id)init;	// IMP=0x0010000000007e9b
- (id)initWithReadonlyResetKey:(id)arg1 readwriteResetKey:(id)arg2 readonlyKey:(id)arg3 readwriteKey:(id)arg4;	// IMP=0x0010000000007cdf

@end

