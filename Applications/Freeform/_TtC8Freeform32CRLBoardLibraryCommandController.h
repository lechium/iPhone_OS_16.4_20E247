//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUndoManager.h>

@class MISSING_TYPE, NSString;

@interface _TtC8Freeform32CRLBoardLibraryCommandController : NSUndoManager
{
    MISSING_TYPE *boardLibrary;	// 8 = 0x8
    MISSING_TYPE *undoStack;	// 24 = 0x18
    MISSING_TYPE *redoStack;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0040000000be24d0
- (id)init;	// IMP=0x0010000000be2450
- (void)redo;	// IMP=0x0010000000be2420
- (void)undo;	// IMP=0x0010000000be1b00
@property(nonatomic, readonly) _Bool canRedo;
@property(nonatomic, readonly) _Bool canUndo;
@property(nonatomic, readonly) NSString *redoActionName;
@property(nonatomic, readonly) NSString *undoActionName;

@end
