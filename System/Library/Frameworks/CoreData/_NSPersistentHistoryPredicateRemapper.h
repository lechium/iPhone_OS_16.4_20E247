//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryPredicateRemapper : NSObject
{
    NSString *_storeID;	// 8 = 0x8
    _Bool _previousKeyPathExpressionWasToken;	// 16 = 0x10
}

+ (id)defaultInstance;	// IMP=0x00100000000608ef
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x0000000000061265
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x0000000000060a28
- (void)visitPredicate:(id)arg1;	// IMP=0x0000000000060a22
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000000060997
- (id)createPredicateForFetchFromPredicate:(id)arg1;	// IMP=0x0000000000060983
- (void)dealloc;	// IMP=0x0000000000060948
- (id)initWithStoreIdentifier:(id)arg1;	// IMP=0x0000000000060914

@end
