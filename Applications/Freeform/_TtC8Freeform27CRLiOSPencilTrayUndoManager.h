//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC8Freeform27CRLiOSPencilTrayUndoManager
{
    MISSING_TYPE *mainUndoManager;	// 8 = 0x8
    MISSING_TYPE *pencilTrayDelegate;	// 16 = 0x10
    MISSING_TYPE *cachedCanUndo;	// 32 = 0x20
    MISSING_TYPE *cachedCanRedo;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x0040000000738c60
- (id)initWithCommandController:(id)arg1;	// IMP=0x0010000000738c00
- (void)redo;	// IMP=0x0010000000738bd0
- (void)undo;	// IMP=0x0010000000738b00
@property(nonatomic, readonly) _Bool canRedo;
@property(nonatomic, readonly) _Bool canUndo;

@end
