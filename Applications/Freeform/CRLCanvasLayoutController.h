//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLCanvas, CRLCanvasLayout, CRLCanvasLayoutChangeObserver, CRLCanvasRootLayout, NSMapTable, NSMutableSet;
@protocol CRLBoardItemOwning;

@interface CRLCanvasLayoutController : NSObject
{
    CRLCanvas *_canvas;	// 8 = 0x8
    CRLCanvasRootLayout *_rootLayout;	// 16 = 0x10
    NSMapTable *_layoutsByInfo;	// 24 = 0x18
    NSMutableSet *_invalidLayouts;	// 32 = 0x20
    NSMutableSet *_layoutsNeedingRecreating;	// 40 = 0x28
    NSMutableSet *_invalidChildrenLayouts;	// 48 = 0x30
    CRLCanvasLayout *_validatingLayout;	// 56 = 0x38
    CRLCanvasLayoutChangeObserver *_layoutRegistrationObserver;	// 64 = 0x40
}

+ (Class)effectiveLayoutClassForInfo:(id)arg1;	// IMP=0x0040000000313c00
+ (void)temporaryLayoutControllerForInfos:(id)arg1 useInBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000031365e
- (void).cxx_destruct;	// IMP=0x0020000000317e37
@property(retain, nonatomic) CRLCanvasLayoutChangeObserver *i_layoutRegistrationObserver; // @synthesize i_layoutRegistrationObserver=_layoutRegistrationObserver;
@property(readonly, nonatomic) CRLCanvasRootLayout *rootLayout; // @synthesize rootLayout=_rootLayout;
@property(readonly, nonatomic) __weak CRLCanvas *canvas; // @synthesize canvas=_canvas;
- (void)p_recreateLayoutsIfNeededToValidateLayouts:(id)arg1;	// IMP=0x0010000000317911
- (void)i_enumerateLayoutsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000317742
- (void)i_removeAllLayouts;	// IMP=0x00100000003176e8
- (void)i_unregisterLayout:(id)arg1;	// IMP=0x001000000031759b
- (void)i_registerLayout:(id)arg1;	// IMP=0x001000000031745c
- (void)notifyThatLayoutsChangedOutsideOfLayout;	// IMP=0x001000000031732e
- (id)validatedLayoutForInfo:(id)arg1 childOfLayout:(id)arg2;	// IMP=0x0010000000317172
- (id)validatedLayoutsForInfo:(id)arg1;	// IMP=0x0010000000316db8
- (id)validatedLayoutForInfo:(id)arg1;	// IMP=0x0010000000316d68
- (void)validateLayoutWithDependencies:(id)arg1;	// IMP=0x0010000000316d15
- (void)validateLayoutsWithDependencies:(id)arg1;	// IMP=0x001000000031677f
- (void)p_validateLayouts:(id)arg1 shouldMarkValidLayoutsThatDoNotWantValidation:(_Bool)arg2;	// IMP=0x0010000000316581
- (id)sortLayoutsForDependencies:(id)arg1;	// IMP=0x00100000003154d3
- (void)validateLayouts;	// IMP=0x0010000000314423
@property(readonly, nonatomic) struct CGRect rectOfTopLevelLayouts;
- (id)layoutsInRect:(struct CGRect)arg1 deep:(_Bool)arg2;	// IMP=0x0010000000314214
- (id)layoutsInRect:(struct CGRect)arg1;	// IMP=0x0010000000314200
- (id)layoutForInfo:(id)arg1 childOfLayout:(id)arg2;	// IMP=0x0010000000314044
- (id)layoutsForInfos:(id)arg1;	// IMP=0x0010000000313e62
- (id)layoutsForInfo:(id)arg1;	// IMP=0x0010000000313e16
- (id)layoutForInfo:(id)arg1;	// IMP=0x0010000000313c6d
- (void)invalidateLayoutForRecreation:(id)arg1;	// IMP=0x0010000000313bb8
- (void)invalidateChildrenOfLayout:(id)arg1;	// IMP=0x0010000000313b70
- (void)invalidateLayout:(id)arg1;	// IMP=0x0010000000313ad6
- (void)setInfos:(id)arg1;	// IMP=0x00100000003137a2
@property(readonly, nonatomic) id <CRLBoardItemOwning> boardItemOwner;
- (void)dealloc;	// IMP=0x00100000003135d2
- (id)initWithCanvas:(id)arg1;	// IMP=0x001000000031349a

@end
