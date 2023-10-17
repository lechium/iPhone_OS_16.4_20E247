//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUndoManager.h>

@class UITextInputController;

__attribute__((visibility("hidden")))
@interface _UITextUndoManager : NSUndoManager
{
    UITextInputController *_inputController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000123e38b
@property(nonatomic) __weak UITextInputController *inputController; // @synthesize inputController=_inputController;
- (void)redo;	// IMP=0x000000000123e2fe
- (void)undo;	// IMP=0x000000000123e29e
- (_Bool)canRedo;	// IMP=0x000000000123e215
- (_Bool)canUndo;	// IMP=0x000000000123e18c
- (void)removeAllActions;	// IMP=0x000000000123e0f5

@end
