//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray;
@protocol CRLiOSValueControlDelegate;

@interface _TtC8Freeform27CRLiOSValueControlMultiCell
{
    MISSING_TYPE *columnsStack;	// 8 = 0x8
    MISSING_TYPE *info;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00400000009fb980
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000009fb900
@property(nonatomic, copy) NSArray *accessibilityElements;
@property(nonatomic, readonly) NSArray *allValueControlsInCell;
@property(nonatomic, readonly) _Bool isUserCurrentlyInteracting;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000009faae0
- (void)updateConstraints;	// IMP=0x00100000009fa9f0
- (id)newAutoAssistantForControl:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000009f86a0
- (CDUnknownBlockType)setColumnControlsAreSizeWithAspectLocking:(long long)arg1 isLocked:(CDUnknownBlockType)arg2 onChange:(CDUnknownBlockType)arg3;	// IMP=0x00100000009f7a00
- (void)setColumnControlsAreSizeWithoutAspectLocking:(long long)arg1;	// IMP=0x00100000009f7730
- (void)setColumnControlsAreXYPosition:(long long)arg1 layoutDirection:(long long)arg2;	// IMP=0x00100000009f7660
- (void)resetColumnAttributes:(long long)arg1;	// IMP=0x00100000009f7650
- (void)setAssistantTitle:(id)arg1 forColumn:(long long)arg2;	// IMP=0x00100000009f7550
- (id)assistantTitleForColumn:(long long)arg1;	// IMP=0x00100000009f74c0
- (void)setControlTarget:(id)arg1 action:(SEL)arg2 column:(long long)arg3 index:(long long)arg4;	// IMP=0x00100000009f7450
- (SEL)controlActionForColumn:(long long)arg1 index:(long long)arg2;	// IMP=0x00100000009f7210
- (id)controlTargetForColumn:(long long)arg1 index:(long long)arg2;	// IMP=0x00100000009f7170
- (void)setControlView:(id)arg1 column:(long long)arg2 index:(long long)arg3;	// IMP=0x00100000009f7100
- (id)controlViewForColumn:(long long)arg1 index:(long long)arg2;	// IMP=0x00100000009f6f80
- (void)setControlAssistantTitle:(id)arg1 column:(long long)arg2 index:(long long)arg3;	// IMP=0x00100000009f6f10
- (id)controlAssistantTitleForColumn:(long long)arg1 index:(long long)arg2;	// IMP=0x00100000009f6d40
- (void)setControlTitle:(id)arg1 column:(long long)arg2 index:(long long)arg3;	// IMP=0x00100000009f6cd0
- (id)controlTitleForColumn:(long long)arg1 index:(long long)arg2;	// IMP=0x00100000009f6b10
- (void)removeControlInColumn:(long long)arg1 index:(long long)arg2;	// IMP=0x00100000009f6a30
- (void)insertControlInColumn:(long long)arg1 index:(long long)arg2 title:(id)arg3 control:(id)arg4 target:(id)arg5 action:(SEL)arg6;	// IMP=0x00100000009f6970
- (void)appendControlInColumn:(long long)arg1 title:(id)arg2 control:(id)arg3 target:(id)arg4 action:(SEL)arg5;	// IMP=0x00100000009f6730
- (long long)numberOfControlsInColumn:(long long)arg1;	// IMP=0x00100000009f64c0
- (void)removeColumn:(long long)arg1;	// IMP=0x00100000009f6400
@property(nonatomic, readonly) long long numberOfColumns;
- (void)insertColumnAtIndex:(long long)arg1;	// IMP=0x00100000009f6310
- (void)appendColumn;	// IMP=0x00100000009f6200
@property(nonatomic) __weak id <CRLiOSValueControlDelegate> delegate;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000009f60f0
- (id)init;	// IMP=0x00100000009f60d0

@end

