//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;
@protocol CRLiOSInspectorPaneSectionTitle;

@interface _TtC8Freeform36CRLiOSArrangeInspectorPaneRotationUI : NSObject
{
    MISSING_TYPE *_editor;	// 8 = 0x8
    MISSING_TYPE *_angleCell;	// 16 = 0x10
    MISSING_TYPE *_dynamicController;	// 24 = 0x18
    MISSING_TYPE *_anchorChooser;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0040000000613720
- (id)init;	// IMP=0x00100000006136c0
- (void)controlValueChangeEnded:(id)arg1;	// IMP=0x0010000000613180
- (void)controlValueDidChange:(id)arg1;	// IMP=0x0010000000612ec0
- (void)controlValueChangeStarted:(id)arg1;	// IMP=0x0010000000612240
- (void)updateCellsInPlaceWith:(id)arg1;	// IMP=0x00100000006120a0
- (id)initWithEditor:(id)arg1;	// IMP=0x0010000000611e50
@property(nonatomic, readonly) NSArray *cells;
@property(nonatomic, readonly) _Bool hasCustomShapeUI;
@property(nonatomic, readonly) id <CRLiOSInspectorPaneSectionTitle> sectionTitle;

@end

