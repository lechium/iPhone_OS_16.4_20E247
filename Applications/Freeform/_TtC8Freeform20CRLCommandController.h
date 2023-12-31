//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, _TtC8Freeform8CRLBoard;

@interface _TtC8Freeform20CRLCommandController : NSObject
{
    MISSING_TYPE *board;	// 8 = 0x8
    MISSING_TYPE *changeNotifier;	// 16 = 0x10
    MISSING_TYPE *selectionDispatcher;	// 24 = 0x18
    MISSING_TYPE *_isExecuting;	// 32 = 0x20
    MISSING_TYPE *_currentTransactionContext;	// 40 = 0x28
    MISSING_TYPE *_currentWatermarkTransactionContext;	// 48 = 0x30
    MISSING_TYPE *commandHistory;	// 56 = 0x38
    MISSING_TYPE *openGroupDatas;	// 72 = 0x48
    MISSING_TYPE *_currentSelectionBehavior;	// 80 = 0x50
    MISSING_TYPE *_indexOfGroupThatSetCurrentSelectionBehavior;	// 88 = 0x58
    MISSING_TYPE *nonUserCommandQueue;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0040000000740040
- (id)init;	// IMP=0x001000000073ffc0
- (void)_stepWatermarkContextIfNecessary;	// IMP=0x001000000073ff90
@property(nonatomic, readonly) _Bool isRealTimeSyncProgressiveEnqueuingInCurrentGroupEnabled;
- (void)enableRealTimeSyncProgressiveEnqueuingInCurrentGroup;	// IMP=0x001000000073f9e0
@property(nonatomic, readonly) _Bool isProgressiveEnqueuingInCurrentGroupEnabled;
- (void)enableProgressiveEnqueuingInCurrentGroup;	// IMP=0x001000000073f3f0
- (void)closeGroupWithSelectionBehavior:(id)arg1;	// IMP=0x001000000073f140
- (void)openGroupWithSelectionBehavior:(id)arg1;	// IMP=0x001000000073ee10
@property(nonatomic, readonly) _Bool isGroupOpen;
@property(nonatomic, readonly) long long groupingLevel;
@property(nonatomic, copy) NSString *currentGroupActionString;
@property(nonatomic, readonly) NSString *redoActionString;
@property(nonatomic, readonly) NSString *undoActionString;
- (void)enqueueWithRealTimePeerCommand:(id)arg1;	// IMP=0x001000000073e470
- (void)enqueueWithUntrackedCommand:(id)arg1;	// IMP=0x001000000073e2d0
- (void)enqueueWithNonUndoableCommand:(id)arg1;	// IMP=0x001000000073e270
@property(nonatomic, readonly) _Bool canRedo;
@property(nonatomic, readonly) _Bool canUndo;
- (void)redo;	// IMP=0x001000000073dfb0
- (void)undoWithoutPushingRedo;	// IMP=0x001000000073d6f0
- (void)undo;	// IMP=0x001000000073d6c0
- (void)enqueueCommand:(id)arg1 withSelectionBehavior:(id)arg2;	// IMP=0x001000000073c2a0
- (id)initWithBoard:(id)arg1 changeNotifier:(id)arg2 selectionDispatcher:(id)arg3;	// IMP=0x001000000073b6f0
@property(nonatomic, readonly) _TtC8Freeform8CRLBoard *board; // @synthesize board;
- (void)enqueueCommand:(id)arg1;	// IMP=0x00100000000f5dd4
- (void)closeGroup;	// IMP=0x00100000000f5dc0
- (void)openGroup;	// IMP=0x00100000000f5dac

@end

