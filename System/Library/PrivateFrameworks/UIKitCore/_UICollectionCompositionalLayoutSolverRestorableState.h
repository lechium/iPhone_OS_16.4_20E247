//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolverRestorableState : NSObject
{
    NSArray *_bookmarkSnapshotters;	// 8 = 0x8
    NSIndexSet *_orthogonalSectionIndexes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002adf37
- (void)applyToSolver:(id)arg1;	// IMP=0x00000000002adeb9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
