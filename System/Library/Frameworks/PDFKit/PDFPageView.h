//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, PDFPageViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageView : UIView
{
    PDFPageViewPrivate *_private;	// 8 = 0x8
    _Bool _overlayViewInstalled;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005cd6c
@property(getter=isOverlayViewInstalled) _Bool overlayViewInstalled; // @synthesize overlayViewInstalled=_overlayViewInstalled;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000005cc1d
- (void)setState:(long long)arg1 onButtonWidgetAnnotation:(id)arg2;	// IMP=0x000000000005ca18
- (void)setStringValue:(id)arg1 onChoiceWidgetAnnotation:(id)arg2 withTableView:(id)arg3;	// IMP=0x000000000005c732
- (void)setStringValue:(id)arg1 onChoiceWidgetAnnotation:(id)arg2 withTextField:(id)arg3;	// IMP=0x000000000005c4b0
- (void)setStringValue:(id)arg1 onTextWidgetAnnotation:(id)arg2 withTextView:(id)arg3;	// IMP=0x000000000005c1ea
- (_Bool)_shouldReplaceStringOnAnnotation:(id)arg1 withTextView:(id)arg2;	// IMP=0x000000000005c11a
- (void)_setAttributedStringForAnnotation:(id)arg1 stringValue:(id)arg2 textView:(id)arg3;	// IMP=0x000000000005bd96
- (_Bool)_allowsFormFieldEntry;	// IMP=0x000000000005bd1d
- (void)_formChanged:(id)arg1;	// IMP=0x000000000005ba06
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000000005b9fb
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x000000000005b981
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;	// IMP=0x000000000005b83f
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x000000000005b725
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000005b5cc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000005b40f
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000005b342
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000005b337
- (void)_addPDFAnnotation:(id)arg1;	// IMP=0x000000000005b1d5
- (void)_addPDFAnnotationStampSignature:(id)arg1;	// IMP=0x000000000005ac86
- (void)_choiceWidgetDone;	// IMP=0x000000000005abe8
- (void)_addPDFAnnotationChoiceWidget:(id)arg1;	// IMP=0x000000000005a41f
- (void)_addPDFAnnotationTextWidget:(id)arg1;	// IMP=0x000000000005a2cb
- (struct CGPoint)convertPointToPageView:(struct CGPoint)arg1;	// IMP=0x000000000005a07e
- (struct CGAffineTransform)_rotationTransformForPageView;	// IMP=0x000000000005a019
- (struct CGRect)convertRectToPageView:(struct CGRect)arg1;	// IMP=0x0000000000059e16
- (void)_updateWidgetControl:(id)arg1 forBounds:(struct CGRect)arg2;	// IMP=0x0000000000059cbd
- (void)_setuppageAnnotationEffects;	// IMP=0x000000000005979a
- (void)updateBookmark;	// IMP=0x0000000000059431
- (void)removeBookmark;	// IMP=0x000000000005934f
- (void)addBookmark;	// IMP=0x0000000000059125
- (void)_setupBookmarkLayer;	// IMP=0x000000000005908f
- (void)setHidden:(_Bool)arg1;	// IMP=0x0000000000058fe1
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000058eb4
- (id)markupAnnotationsForIndexSet:(id)arg1;	// IMP=0x0000000000058e93
- (void)addMarkupWithStyle:(unsigned long long)arg1 forIndexSet:(id)arg2;	// IMP=0x0000000000058e72
- (void)removeControlForAnnotation:(id)arg1;	// IMP=0x0000000000058d06
- (void)_rotateActiveAnnotation;	// IMP=0x0000000000058c17
- (void)addControlForAnnotation:(id)arg1;	// IMP=0x0000000000058b65
- (id)activeAnnotation;	// IMP=0x0000000000058b19
- (void)removeAnnotation:(id)arg1;	// IMP=0x00000000000588a4
- (void)_updateAnnotationVisibility:(id)arg1;	// IMP=0x00000000000586a4
- (void)updateAnnotation:(id)arg1;	// IMP=0x0000000000058348
- (void)addAnnotation:(id)arg1;	// IMP=0x0000000000058336
- (void)colorWidgetBackgrounds:(_Bool)arg1;	// IMP=0x0000000000058118
- (void)hideTileLayer:(_Bool)arg1;	// IMP=0x00000000000580f7
- (void)previewRotatePage:(double)arg1;	// IMP=0x0000000000057f21
- (void)addSearchSelection:(id)arg1;	// IMP=0x0000000000057ef9
- (void)setSearchSelections:(id)arg1;	// IMP=0x0000000000057ed8
- (int)backgroundImageQuality;	// IMP=0x0000000000057e84
- (id)backgroundImage;	// IMP=0x0000000000057e23
- (_Bool)hasBackgroundImage;	// IMP=0x0000000000057dca
- (void)setBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2;	// IMP=0x0000000000057b52
- (id)pageLayer;	// IMP=0x0000000000057b31
- (id)geometryInterface;	// IMP=0x0000000000057b10
- (id)page;	// IMP=0x0000000000057aef
- (void)_updateBackgroundColor;	// IMP=0x00000000000579a4
- (void)_didRotatePageNotification:(id)arg1;	// IMP=0x0000000000057992
- (unsigned long long)visibilityDelegateIndex;	// IMP=0x0000000000057950
- (void)setVisibilityDelegateIndex:(unsigned long long)arg1;	// IMP=0x000000000005790f
- (void)applyTileLayoutScale:(double)arg1;	// IMP=0x00000000000578c9
- (void)restoreOriginalTileLayout;	// IMP=0x000000000005788d
- (void)saveOriginalTileLayout;	// IMP=0x0000000000057851
- (void)clearTiles;	// IMP=0x0000000000057815
- (void)forceTileUpdate;	// IMP=0x00000000000577d9
- (_Bool)enablesTileUpdates;	// IMP=0x0000000000057797
- (void)setEnableTileUpdates:(_Bool)arg1;	// IMP=0x0000000000057756
- (void)scalePageLayerEffects:(double)arg1;	// IMP=0x0000000000057710
- (struct CGAffineTransform)layerEffectTransform;	// IMP=0x00000000000576b4
- (void)updatePageLayerEffects;	// IMP=0x0000000000057678
- (void)updatePageLayerEffectForID:(id)arg1;	// IMP=0x0000000000057616
- (id)pageLayerEffectForID:(id)arg1;	// IMP=0x00000000000575a4
- (void)removePageLayerEffectForID:(id)arg1;	// IMP=0x0000000000057542
- (void)addPageLayerEffect:(id)arg1;	// IMP=0x00000000000574e0
- (_Bool)isVisible;	// IMP=0x000000000005749e
- (long long)displayBox;	// IMP=0x000000000005745c
- (void)setNeedsTilesUpdate;	// IMP=0x0000000000057402
- (id)renderingProperties;	// IMP=0x00000000000573e1
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x0000000000057385
- (void)dealloc;	// IMP=0x0000000000056f54
- (id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;	// IMP=0x0000000000056987

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

