//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDLinksCollection : NSObject
{
    NSMutableArray *mLinks;	// 8 = 0x8
    NSMutableArray *mReferences;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003a2b8a
- (id)description;	// IMP=0x00000000003a2b4c
- (void)addOrEquivalentExternalAddInName:(id)arg1 linkReferenceIndex:(unsigned long long *)arg2 nameIndex:(unsigned long long *)arg3;	// IMP=0x00000000003a29c0
- (unsigned long long)addOrEquivalentLinkReferenceOfType:(int)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;	// IMP=0x000000000020bf2a
- (unsigned long long)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned long long)arg1 lastSheetIndex:(unsigned long long)arg2;	// IMP=0x00000000003a29a3
- (_Bool)convertLinkReferenceIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long *)arg2 lastSheetIndex:(unsigned long long *)arg3;	// IMP=0x000000000017dee3
- (unsigned long long)addReference:(id)arg1;	// IMP=0x0000000000136726
- (unsigned long long)indexOfReference:(id)arg1;	// IMP=0x000000000020c108
- (id)referenceAtIndex:(unsigned long long)arg1;	// IMP=0x000000000014ddb1
- (unsigned long long)referencesCount;	// IMP=0x000000000014ddfc
- (unsigned long long)linkIndexCreateIfNeededWithType:(int)arg1;	// IMP=0x000000000020bfcc
- (unsigned long long)addLink:(id)arg1;	// IMP=0x000000000013687e
- (unsigned long long)indexOfFirstLinkWithType:(int)arg1;	// IMP=0x000000000020c054
- (id)linkAtIndex:(unsigned long long)arg1;	// IMP=0x000000000014de1c
- (unsigned long long)linksCount;	// IMP=0x000000000014de67
- (id)init;	// IMP=0x0000000000113379

@end
