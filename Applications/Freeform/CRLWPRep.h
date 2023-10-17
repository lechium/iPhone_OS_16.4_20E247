//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, CAShapeLayer, CRLCanvasLayout, CRLCanvasRenderable, CRLColor, CRLNoDefaultImplicitActionLayer, CRLPulseAnimationController, CRLWPDragAndDropHelper, CRLWPHighlightArrayController, CRLWPRangeArray, CRLWPRepCaretController, CRLWPSearchReference, CRLWPSelection, CRLWPStorageSpellChecker, NSArray, NSObject, NSString, NSUUID, _TtC8Freeform11CRLWPEditor, _TtC8Freeform12CRLWPStorage;
@protocol CRLContainerInfo, CRLWPLayoutTarget;

@interface CRLWPRep
{
    CALayer *_textLayers[2];	// 8 = 0x8
    CAShapeLayer *_caretLayer;	// 24 = 0x18
    CAShapeLayer *_selectionLineLayers[2];	// 32 = 0x20
    CAShapeLayer *_selectionHighlightLayer;	// 48 = 0x30
    CAShapeLayer *_selectionParagraphBorderLayer;	// 56 = 0x38
    CAShapeLayer *_markHighlightLayer;	// 64 = 0x40
    CAShapeLayer *_smartFieldHighlightLayer;	// 72 = 0x48
    CAShapeLayer *_secondaryHighlightLayer;	// 80 = 0x50
    struct _NSRange _secondaryHighlightRange;	// 88 = 0x58
    int _secondaryHighlightPathStyle;	// 104 = 0x68
    CRLWPHighlightArrayController *_pulseArrayController;	// 112 = 0x70
    CRLWPHighlightArrayController *_highlightArrayController;	// 120 = 0x78
    CRLPulseAnimationController *_caretPulseController;	// 128 = 0x80
    _Bool _caretAnimationDisabled;	// 136 = 0x88
    _Bool _suppressCaret;	// 137 = 0x89
    CRLWPStorageSpellChecker *_spellChecker;	// 144 = 0x90
    CRLWPRangeArray *_misspelledRanges;	// 152 = 0x98
    CRLWPRangeArray *_ungrammaticRanges;	// 160 = 0xa0
    struct _NSRange _suppressedMisspellingRange;	// 168 = 0xa8
    _Bool _updatingHighlights;	// 184 = 0xb8
    _Bool _suppressSelectionHighlight;	// 185 = 0xb9
    struct _NSRange _dragRange;	// 192 = 0xc0
    CRLWPSelection *_lastSelection;	// 208 = 0xd0
    _Bool _selectionChanged;	// 216 = 0xd8
    _Bool _markChanged;	// 217 = 0xd9
    unsigned long long _newSelectionFlags;	// 224 = 0xe0
    _Bool _repFieldsAreActive;	// 232 = 0xe8
    _Bool _hudStateDirty;	// 233 = 0xe9
    _Bool _useKeyboardWhenEditing;	// 234 = 0xea
    double _listLevelIndents[9];	// 240 = 0xf0
    CRLWPSelection *_dropSelection;	// 312 = 0x138
    _Bool _isShowingCommentKnobs;	// 320 = 0x140
    _Bool _tornDown;	// 321 = 0x141
    _Bool _searchHitsAreInvalid;	// 322 = 0x142
    CRLCanvasRenderable *_collaboratorCursorRenderable;	// 328 = 0x148
    _Bool _collaboratorCursorRenderableValid;	// 336 = 0x150
    CRLWPRepCaretController *_caretController;	// 344 = 0x158
    unsigned long long _changeCountForSpellingSuppression;	// 352 = 0x160
    _Bool _dataChangeObserverIsConfigured;	// 360 = 0x168
    _Bool _findIsShowing;	// 361 = 0x169
    _Bool _usesStandardHighlightColorForReplaceSelections;	// 362 = 0x16a
    _Bool _dragOperationInProgress;	// 363 = 0x16b
    _Bool _suppressSelectionControls;	// 364 = 0x16c
    _Bool _shouldIgnoreFirstRequestToShowEditMenu;	// 365 = 0x16d
    _Bool _hasOverflowed;	// 366 = 0x16e
    _Bool _dragAndDropCaretLayerIsForCaret;	// 367 = 0x16f
    NSUUID *_scribbleIdentifier;	// 368 = 0x170
    CRLWPDragAndDropHelper *_dragAndDropHelper;	// 376 = 0x178
    CRLWPSearchReference *_primaryFindResultSearchReference;	// 384 = 0x180
    CALayer *_dragAndDropTopicLayer;	// 392 = 0x188
    CRLNoDefaultImplicitActionLayer *_dragAndDropTopicIndentLayer;	// 400 = 0x190
    CAShapeLayer *_dragAndDropCaretLayer;	// 408 = 0x198
    CRLColor *_backgroundColor;	// 416 = 0x1a0
    NSArray *_searchReferences;	// 424 = 0x1a8
    CAShapeLayer *_floatingCaretLayer;	// 432 = 0x1b0
    double _ibeamLength;	// 440 = 0x1b8
    CRLColor *_overrideCaretColor;	// 448 = 0x1c0
}

+ (void)initialize;	// IMP=0x002000000043652a
+ (id)unfocusedHighlightColorForDarkMode:(_Bool)arg1;	// IMP=0x00100000004361d3
+ (id)focusedHighlightColorForDarkMode:(_Bool)arg1;	// IMP=0x0010000000436170
- (void).cxx_destruct;	// IMP=0x00100000004535f8
@property(retain, nonatomic) CRLColor *overrideCaretColor; // @synthesize overrideCaretColor=_overrideCaretColor;
@property(nonatomic) double ibeamLength; // @synthesize ibeamLength=_ibeamLength;
@property(copy, nonatomic) CRLWPSelection *lastSelection; // @synthesize lastSelection=_lastSelection;
@property(nonatomic) _Bool dragAndDropCaretLayerIsForCaret; // @synthesize dragAndDropCaretLayerIsForCaret=_dragAndDropCaretLayerIsForCaret;
@property(retain, nonatomic) CAShapeLayer *floatingCaretLayer; // @synthesize floatingCaretLayer=_floatingCaretLayer;
@property(retain, nonatomic) NSArray *searchReferences; // @synthesize searchReferences=_searchReferences;
@property(nonatomic) _Bool hasOverflowed; // @synthesize hasOverflowed=_hasOverflowed;
@property(nonatomic) _Bool shouldIgnoreFirstRequestToShowEditMenu; // @synthesize shouldIgnoreFirstRequestToShowEditMenu=_shouldIgnoreFirstRequestToShowEditMenu;
@property(nonatomic) _Bool useKeyboardWhenEditing; // @synthesize useKeyboardWhenEditing=_useKeyboardWhenEditing;
@property(nonatomic) struct _NSRange dragRange; // @synthesize dragRange=_dragRange;
@property(nonatomic) _Bool suppressSelectionControls; // @synthesize suppressSelectionControls=_suppressSelectionControls;
@property(nonatomic, getter=isSelectionHighlightSuppressed) _Bool suppressSelectionHighlight; // @synthesize suppressSelectionHighlight=_suppressSelectionHighlight;
@property(nonatomic) _Bool dragOperationInProgress; // @synthesize dragOperationInProgress=_dragOperationInProgress;
@property(nonatomic) __weak CRLWPSelection *dropSelection; // @synthesize dropSelection=_dropSelection;
@property(retain, nonatomic) CRLColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) CAShapeLayer *dragAndDropCaretLayer; // @synthesize dragAndDropCaretLayer=_dragAndDropCaretLayer;
@property(retain, nonatomic) CRLNoDefaultImplicitActionLayer *dragAndDropTopicIndentLayer; // @synthesize dragAndDropTopicIndentLayer=_dragAndDropTopicIndentLayer;
@property(retain, nonatomic) CALayer *dragAndDropTopicLayer; // @synthesize dragAndDropTopicLayer=_dragAndDropTopicLayer;
@property(nonatomic) _Bool usesStandardHighlightColorForReplaceSelections; // @synthesize usesStandardHighlightColorForReplaceSelections=_usesStandardHighlightColorForReplaceSelections;
@property(readonly, nonatomic) CRLWPStorageSpellChecker *spellChecker; // @synthesize spellChecker=_spellChecker;
@property(nonatomic) _Bool findIsShowing; // @synthesize findIsShowing=_findIsShowing;
@property(retain, nonatomic) CRLWPSearchReference *primaryFindResultSearchReference; // @synthesize primaryFindResultSearchReference=_primaryFindResultSearchReference;
@property(readonly, nonatomic) NSUUID *scribbleIdentifier; // @synthesize scribbleIdentifier=_scribbleIdentifier;
- (id)p_textEditorForTextStorage:(id)arg1;	// IMP=0x00100000004530c0
- (id)p_selectionPathIncludingInfo:(id)arg1 excludingInfo:(id)arg2;	// IMP=0x00100000004530b8
- (struct CGRect)p_convertRectIntoZoomCoordinates:(struct CGRect)arg1;	// IMP=0x0010000000452fd2
- (void)updateUniversalAccessZoomWindow;	// IMP=0x001000000045294a
- (void)layerHostContainerFocusDidChange;	// IMP=0x0010000000452944
- (struct UIEdgeInsets)hitToleranceInsetsWithDefaultInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000000045292c
@property(readonly, nonatomic) _Bool scribbleElementIsFocused;
@property(readonly, nonatomic) _Bool shouldDelayScribbleFocus;
@property(readonly, nonatomic) struct CGRect scaledScribbleEditingFrame;
- (_Bool)scribbleExceedsVerticalDistanceForNearestCharIndex:(unsigned long long)arg1 boundsPoint:(struct CGPoint)arg2 isAtEndOfLine:(_Bool)arg3;	// IMP=0x0010000000452730
- (void)scribbleSetSelectionForBeginEditingWithBoundsPoint:(struct CGPoint)arg1 tappedInRep:(id)arg2;	// IMP=0x0010000000452071
@property(readonly, copy, nonatomic) CDUnknownBlockType scribbleEditingBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType willBeginWritingBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType prepareForScribbleBlock;
@property(readonly, nonatomic) NSArray *scribbleCapableElements;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0010000000451b7e
- (id)imageForSearchReference:(id)arg1 forPath:(struct CGPath *)arg2 shouldPulsate:(_Bool)arg3;	// IMP=0x0010000000451a8c
- (struct CGPath *)newPathForSearchReference:(id)arg1;	// IMP=0x0010000000451305
- (void)p_updateHighlights;	// IMP=0x0010000000450dad
- (void)prepareLayoutForImagingSearchReferencesAsActive:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000004506ec
- (void)i_setSearchReferencesToHighlight:(id)arg1;	// IMP=0x0010000000450573
- (void)p_setPrimaryFindResultSearchReference:(id)arg1;	// IMP=0x0010000000450402
- (void)i_primaryFindResultChanged:(id)arg1;	// IMP=0x001000000045036f
- (_Bool)p_doesRepIntersectSearchReference:(id)arg1;	// IMP=0x00100000004501fa
- (void)p_setPulseControllerActive:(_Bool)arg1 autohide:(_Bool)arg2;	// IMP=0x001000000045006f
- (unsigned long long)pulseAnimationStyle:(id)arg1;	// IMP=0x001000000044ffe1
- (void)pulseAnimationDidStopForPulse:(id)arg1;	// IMP=0x001000000044ff3e
- (void)pulseAnimationDidStop:(id)arg1;	// IMP=0x001000000044fa6f
- (void)p_clearICCPrimaryFindResultSearchReference;	// IMP=0x001000000044f827
- (id)backgroundColorForDragPreviewOfSelection:(id)arg1;	// IMP=0x001000000044f7d8
@property(readonly, nonatomic) _TtC8Freeform12CRLWPStorage *storageForDragDropOperation;
@property(readonly, nonatomic) _Bool allowGenericDrags;
- (_Bool)isDragPoint:(struct CGPoint)arg1 inSelection:(id)arg2 includeEndpoints:(_Bool)arg3;	// IMP=0x001000000044f5ed
- (id)textEditorForDropIntoStorage:(id)arg1;	// IMP=0x001000000044f07f
- (id)selectionForDragAndDropNaturalPoint:(struct CGPoint)arg1;	// IMP=0x001000000044ef58
@property(readonly, nonatomic) struct CGAffineTransform transformToConvertNaturalToScaledRoot;
- (struct CGColor *)p_highlightLineColor;	// IMP=0x001000000044ed96
- (struct CGColor *)p_caretLayerColor;	// IMP=0x001000000044ecf3
- (void)p_updateCaretLayerColor;	// IMP=0x001000000044ec67
- (void)p_editingDidEndNotification:(id)arg1;	// IMP=0x001000000044ec61
- (void)p_markChangedNotification:(id)arg1;	// IMP=0x001000000044ec5b
- (void)p_selectionChangedNotification:(id)arg1;	// IMP=0x001000000044e99c
- (void)p_invalidateCommentKnobs;	// IMP=0x001000000044e996
- (void)didDrawInLayer:(id)arg1 context:(struct CGContext *)arg2;	// IMP=0x001000000044e967
- (void)p_destroySpellChecker;	// IMP=0x001000000044e946
- (void)p_spellcheckFinished:(id)arg1;	// IMP=0x001000000044e7e0
- (void)p_createSpellChecker;	// IMP=0x001000000044e475
- (_Bool)p_needsSpellChecker;	// IMP=0x001000000044e37f
- (_Bool)p_automaticTextSubstitutionEnabled;	// IMP=0x001000000044e2d2
- (_Bool)p_spellCheckingEnabled;	// IMP=0x001000000044e20c
- (void)p_showCollaboratorCursorLayer;	// IMP=0x001000000044e148
- (void)p_hideCollaboratorCursorLayer;	// IMP=0x001000000044e06d
- (id)currentCollaboratorCursorColor;	// IMP=0x001000000044e054
- (id)collaboratorCursorRenderable;	// IMP=0x001000000044da6c
- (void)p_withCollaboratorCursorPerformBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000044cc2f
- (double)collaborativeCursorOpacityForCaret:(_Bool)arg1;	// IMP=0x001000000044cac7
- (_Bool)p_storageMatchesSelectionPath:(id)arg1;	// IMP=0x001000000044c7d2
- (void)hideCollaboratorCursors;	// IMP=0x001000000044c7b5
- (void)collaboratorCursorChangedToSelectionPath:(id)arg1;	// IMP=0x001000000044c67b
- (_Bool)shouldShowCollaboratorCursorHighlight;	// IMP=0x001000000044c407
- (_Bool)shouldAddCollaboratorLayerToOverlays;	// IMP=0x001000000044c3c1
- (void)invalidateCollaboratorCursorRenderable;	// IMP=0x001000000044c3b0
- (struct CGRect)boundsForCollaboratorCursorRenderable;	// IMP=0x001000000044c392
- (void)p_updateMarkHighlightLayer;	// IMP=0x001000000044bbdf
- (void)p_hideMarkHighlightLayer;	// IMP=0x001000000044bbbd
- (void)p_createMarkHighlightLayer;	// IMP=0x001000000044ba47
- (void)p_showSelectionParagraphBorderLayerWithPath:(struct CGPath *)arg1;	// IMP=0x001000000044b8db
- (void)p_hideSelectionParagraphBorderLayer;	// IMP=0x001000000044b77e
- (void)p_hideSelectionHighlightLayer;	// IMP=0x001000000044b75c
- (void)p_createSelectionParagraphBorderLayer;	// IMP=0x001000000044b36d
- (void)p_createSelectionHighlightLayer;	// IMP=0x001000000044b052
- (void)p_setSelectionHighlightColor;	// IMP=0x001000000044ab17
- (void)p_setSelectionLineLayersHidden:(_Bool)arg1;	// IMP=0x001000000044aac6
- (void)p_createSelectionLineLayers;	// IMP=0x001000000044a6a2
- (void)i_textInputResponderDidBecomeFirstResponder;	// IMP=0x001000000044a62a
- (void)i_textInputResponderDidResignFirstResponder;	// IMP=0x001000000044a5b2
@property(readonly, nonatomic) _Bool isShowingCaret;
- (void)hideCaretLayer;	// IMP=0x001000000044a57f
- (void)showCaretLayerStartingAnimation;	// IMP=0x001000000044a562
@property(readonly, nonatomic) _Bool caretIsHidden;
- (_Bool)p_positionCaretLayer:(id)arg1 forSelection:(id)arg2 layerRelative:(_Bool)arg3;	// IMP=0x0010000000449daa
- (void)p_positionAndSizeFloatingCaret:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0010000000449acc
- (id)p_caretLayerWithZPosition:(double)arg1;	// IMP=0x00100000004499a4
- (void)p_destroyLayer:(long long)arg1;	// IMP=0x0010000000449967
- (void)p_createLayer:(long long)arg1;	// IMP=0x0010000000449551
- (void)p_drawTextInLayer:(id)arg1 context:(struct CGContext *)arg2 limitSelection:(id)arg3 rubyGlyphRange:(struct _NSRange)arg4 renderMode:(unsigned long long)arg5 suppressInvisibles:(_Bool)arg6;	// IMP=0x0010000000448938
- (void)p_teardown;	// IMP=0x001000000044847f
@property(readonly, nonatomic) _Bool textIsVertical;
- (_Bool)shouldLayoutTilingLayer:(id)arg1;	// IMP=0x001000000044839b
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000448372
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x001000000044826c
- (void)p_drawTextBackgroundLayerInContext:(struct CGContext *)arg1;	// IMP=0x0010000000448162
- (void)p_drawTextLayerInContext:(struct CGContext *)arg1;	// IMP=0x0010000000448058
- (void)p_validateWithLayoutController;	// IMP=0x0010000000447fc8
- (void)i_setNeedsDisplayForSelectionChange;	// IMP=0x0010000000447694
- (void)p_updateForCurrentSelectionWithFlags:(unsigned long long)arg1;	// IMP=0x00100000004470a3
- (void)p_updateSuppressedSpellingRange;	// IMP=0x0010000000446731
- (void)p_setSuppressedMisspellingRange:(struct _NSRange)arg1;	// IMP=0x0010000000446686
- (void)p_invalidateSuppressedMisspellingRange;	// IMP=0x001000000044664e
- (void)i_renderingOptionsDidChange;	// IMP=0x001000000044663c
- (void)i_spellCheckerWordsDidChange;	// IMP=0x00100000004465f7
- (void)i_setNeedsErasableDisplayInRange:(struct _NSRange)arg1;	// IMP=0x001000000044639a
- (void)p_hideSelectionLayers;	// IMP=0x0010000000446340
- (_Bool)p_canShowSelectionAndCaretLayers;	// IMP=0x0010000000446159
- (void)p_updateLayersForRangeSelection:(id)arg1 selectionFlags:(unsigned long long)arg2;	// IMP=0x0010000000445b4c
- (struct CGPoint)p_pinPoint:(struct CGPoint)arg1 toRect:(struct CGRect)arg2;	// IMP=0x0010000000445b0e
- (id)lineSearchReferencesForSearchReference:(id)arg1;	// IMP=0x00100000004457f8
- (id)p_lineSelectionsForSelection:(id)arg1;	// IMP=0x001000000044558f
- (struct CGPath *)p_newSelectionPathForSelection:(id)arg1 transform:(struct CGAffineTransform *)arg2 headPinRect:(out struct CGRect *)arg3 tailPinRect:(out struct CGRect *)arg4 markedText:(_Bool)arg5;	// IMP=0x0010000000444c2b
- (struct CGPath *)p_newSelectionPathForSelection:(id)arg1 transform:(struct CGAffineTransform *)arg2 headPinRect:(out struct CGRect *)arg3 tailPinRect:(out struct CGRect *)arg4;	// IMP=0x0010000000444c09
- (void)updateVisualSelection:(id)arg1;	// IMP=0x0010000000444baf
- (void)p_updateAnimationWithAnimatingPulse:(_Bool)arg1;	// IMP=0x00100000004448fd
- (void)editingDidEndWithTextEditor:(id)arg1;	// IMP=0x001000000044482f
- (_Bool)doesNeedDisplayOnEditingDidEnd;	// IMP=0x0010000000444827
- (_Bool)isOverflowing;	// IMP=0x001000000044478d
- (id)textImageForRect:(struct CGRect)arg1;	// IMP=0x001000000044473d
- (id)textImageForSelection:(id)arg1 frame:(struct CGRect *)arg2 usingGlyphRect:(_Bool)arg3 shouldPulsate:(_Bool)arg4 suppressInvisibles:(_Bool)arg5 suppressChildReps:(_Bool)arg6 drawBackground:(_Bool)arg7 inset:(double)arg8;	// IMP=0x00100000004442ce
- (id)p_imageForZeroLengthPath:(struct CGPath *)arg1;	// IMP=0x00100000004439ce
- (id)p_imageForRect:(struct CGRect)arg1 usingGlyphRect:(_Bool)arg2 prepareBackground:(_Bool)arg3 drawBackground:(_Bool)arg4 shouldPulsate:(_Bool)arg5 forCaret:(_Bool)arg6 drawSelection:(id)arg7 suppressInvisibles:(_Bool)arg8 suppressChildReps:(_Bool)arg9;	// IMP=0x0010000000443299
- (void)p_updateLayersForInsertionPointSelection:(id)arg1;	// IMP=0x001000000044302f
- (_Bool)p_allowCaretForSelection:(id)arg1;	// IMP=0x0010000000442ef6
- (struct CGRect)p_convertNaturalRectToRotated:(struct CGRect)arg1 repAngle:(double)arg2;	// IMP=0x0010000000442ded
- (struct _NSRange)rangeOfMisspelledWordAtCharIndex:(unsigned long long)arg1;	// IMP=0x0010000000442d4f
- (struct CGRect)glyphRectForRubyFieldAtCharIndex:(unsigned long long)arg1 glyphRange:(struct _NSRange)arg2;	// IMP=0x0010000000442b36
- (unsigned long long)glyphCountForRubyFieldAtCharIndex:(unsigned long long)arg1;	// IMP=0x0010000000442993
- (unsigned int)fontTraitsForRange:(struct _NSRange)arg1 includingLabel:(_Bool)arg2;	// IMP=0x001000000044277f
- (struct CGRect)glyphRectForRange:(struct _NSRange)arg1 includingLabel:(_Bool)arg2;	// IMP=0x00100000004424f2
- (struct CGRect)columnRectForRange:(struct _NSRange)arg1;	// IMP=0x001000000044246c
- (struct CGRect)labelRectForCharIndex:(unsigned long long)arg1;	// IMP=0x00100000004423f5
- (_Bool)shouldCreateTextKnobs;	// IMP=0x0010000000442331
- (_Bool)shouldCreateLockedKnobs;	// IMP=0x0010000000442329
- (_Bool)shouldCreateSelectionKnobs;	// IMP=0x0010000000442321
- (void)updatePositionsOfKnobs:(id)arg1;	// IMP=0x0010000000442115
- (void)addKnobsToArray:(id)arg1;	// IMP=0x0010000000441b57
@property(readonly, nonatomic) CRLWPSelection *selection;
@property(readonly, nonatomic) NSArray *columns;
@property(readonly, nonatomic) _TtC8Freeform12CRLWPStorage *storage;
@property(readonly, nonatomic) __weak CRLCanvasLayout<CRLWPLayoutTarget> *layout;
- (_Bool)wantsContextMenuWhenEditingDisabledAtPoint:(struct CGPoint)arg1;	// IMP=0x001000000044181e
- (_Bool)wantsToHandleTapsWhenLocked;	// IMP=0x0010000000441816
- (_Bool)wantsToHandleTapsOnBehalfOfRepForSelecting;	// IMP=0x001000000044180e
- (void)willDisplayEditHyperlinkUIForHyperlinkField:(id)arg1 beginEditing:(_Bool)arg2;	// IMP=0x0010000000441808
- (id)hyperlinkContainerRep;	// IMP=0x0010000000441769
- (_Bool)shouldPreventMarqueeInitiationAtPoint:(struct CGPoint)arg1 withTouchType:(long long)arg2;	// IMP=0x00100000004415f5
- (id)repForDragging;	// IMP=0x001000000044159f
- (id)dragItemsForBeginningDragAtPoint:(struct CGPoint)arg1;	// IMP=0x0010000000441592
- (id)siblings;	// IMP=0x0010000000441282
- (id)repForCharIndex:(unsigned long long)arg1 isStart:(_Bool)arg2;	// IMP=0x00100000004410ac
- (_Bool)p_doesRep:(id)arg1 containCharIndex:(unsigned long long)arg2 isStart:(_Bool)arg3;	// IMP=0x0010000000441041
- (_Bool)containsStartOfSelection:(id)arg1;	// IMP=0x0010000000440eb5
- (void)pulseCaret;	// IMP=0x0010000000440b79
- (void)didEnterBackground;	// IMP=0x0010000000440b5c
- (void)willEnterForeground;	// IMP=0x0010000000440b3f
- (void)enableCaretAnimation;	// IMP=0x0010000000440b1d
- (void)disableCaretAnimation;	// IMP=0x0010000000440afe
@property(nonatomic) _Bool caretBlinks;
@property(readonly, nonatomic) _Bool selectionChangeWasLocal;
- (void)endFloatingCursorWithRepForAnimation:(id)arg1;	// IMP=0x001000000044095a
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000004408e3
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1 animate:(_Bool)arg2;	// IMP=0x001000000044071f
- (void)textInteractionCaretDragStopped;	// IMP=0x00100000004406cd
- (void)textInteractionCaretEndedFloating;	// IMP=0x0010000000440685
- (void)textInteractionCaretBeganFloating;	// IMP=0x0010000000440640
- (void)textInteractionCaretDragStarted;	// IMP=0x001000000044062e
- (void)suppressCaret:(_Bool)arg1;	// IMP=0x0010000000440611
- (void)updateCaretColorForFinishedFloatingCursor;	// IMP=0x00100000004405fd
- (void)updateCaretColorForFloatingCursorInFlight;	// IMP=0x00100000004405e6
@property(nonatomic) _Bool ghostCaretAppearance;
- (void)p_addDropAnimationToFloatingCursorWithEndingRep:(id)arg1;	// IMP=0x0010000000440033
- (void)p_addLiftAnimationToFloatingCursor;	// IMP=0x001000000043fb0b
- (void)gesturesDidEnd;	// IMP=0x001000000043faf9
- (void)didEndZooming;	// IMP=0x001000000043fa81
- (void)willBeginZooming;	// IMP=0x001000000043fa36
- (id);	// IMP=0x001000000043f936
@property(readonly, nonatomic) struct CGSize hitTestingSlop;
@property(readonly, nonatomic) _Bool isDropTarget;
@property(readonly, nonatomic) _Bool isBeingEdited;
- (id)columnForCharIndex:(unsigned long long)arg1;	// IMP=0x001000000043f48b
- (id)closestColumnForPoint:(struct CGPoint)arg1;	// IMP=0x001000000043f3bd
- (_Bool)shouldIgnoreSingleTapAtPoint:(struct CGPoint)arg1 withRecognizer:(id)arg2;	// IMP=0x001000000043f3aa
- (void)setHighlightedHyperlinkField:(id)arg1;	// IMP=0x001000000043f2c8
- (void)clearSecondaryHighlight;	// IMP=0x001000000043f2ac
- (void)setSecondaryHighlightRange:(struct _NSRange)arg1 color:(struct CGColor *)arg2 pathStyle:(int)arg3;	// IMP=0x001000000043f12c
- (void)p_updateSecondaryHighlightLayer;	// IMP=0x001000000043eff4
- (id)smartFieldAtPoint:(struct CGPoint)arg1;	// IMP=0x001000000043ee96
- (_Bool)p_canRepBeginEditingOnDoubleTap;	// IMP=0x001000000043ee8e
- (_Bool)canEditWithEditor:(id)arg1;	// IMP=0x001000000043ecef
- (void)didBeginEditingWithTextEditor:(id)arg1;	// IMP=0x001000000043eb80
- (void)beginEditing;	// IMP=0x001000000043e9ae
- (Class)wpEditorClass;	// IMP=0x001000000043e99d
- (struct CGRect)newTextLayerUnscaledBounds:(struct CGRect)arg1 forNewTextBounds:(struct CGRect)arg2;	// IMP=0x001000000043e985
- (void)screenScaleDidChange;	// IMP=0x001000000043e820
- (struct CGRect)rectToClipChildRepRenderables;	// IMP=0x001000000043e71b
- (void)didUpdateRenderable:(id)arg1;	// IMP=0x001000000043e1cd
- (struct CGRect)clipRect;	// IMP=0x001000000043e163
- (struct CGRect)p_clipRect:(struct CGRect)arg1;	// IMP=0x001000000043df05
- (void)updateFromLayout;	// IMP=0x001000000043dae3
- (void)invalidateHUDState;	// IMP=0x001000000043d76e
- (void)p_scheduleUpdateHUDState;	// IMP=0x001000000043d5d9
- (void)addAdditionalChildLayersToArray:(id)arg1;	// IMP=0x001000000043d2c9
- (_Bool)wantsChildRepLayerUpdatingCallsEvenWithNoChildren;	// IMP=0x001000000043d2c1
- (id)overlayRenderables;	// IMP=0x001000000043c8cd
- (void)drawRubyInContext:(struct CGContext *)arg1 rubyFieldStart:(unsigned long long)arg2 rubyGlyphRange:(struct _NSRange)arg3;	// IMP=0x001000000043c7c1
- (void)recursivelyDrawInContext:(struct CGContext *)arg1 limitSelection:(id)arg2 suppressInvisibles:(_Bool)arg3;	// IMP=0x001000000043c7ae
- (void)p_drawInContext:(struct CGContext *)arg1 limitSelection:(id)arg2 suppressInvisibles:(_Bool)arg3;	// IMP=0x001000000043c71b
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x001000000043c704
- (void)drawInLayerContext:(struct CGContext *)arg1;	// IMP=0x001000000043c490
- (id)colorBehindLayer:(id)arg1;	// IMP=0x001000000043c3a1
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x001000000043c177
- (void)setNeedsDisplayInRange:(struct _NSRange)arg1;	// IMP=0x001000000043c0e7
- (void)setNeedsDisplay;	// IMP=0x001000000043bf1f
- (id)textBackgroundLayer;	// IMP=0x001000000043bf0a
- (id)textLayer;	// IMP=0x001000000043bef4
- (void)performBlockOnTextLayers:(CDUnknownBlockType)arg1;	// IMP=0x001000000043be8a
- (id)p_hyperlinkAtPoint:(struct CGPoint)arg1;	// IMP=0x001000000043bdfb
- (void)spellCheckingStateChanged;	// IMP=0x001000000043bd9f
- (void)processChangedProperty:(unsigned long long)arg1;	// IMP=0x001000000043bd2b
- (void)verticalTextPropertyChanged;	// IMP=0x001000000043bcb7
- (long long)tilingMode;	// IMP=0x001000000043bc9d
- (_Bool)directlyManagesLayerContent;	// IMP=0x001000000043bc95
- (Class)layerClass;	// IMP=0x001000000043bc84
- (double)knobOffsetForKnob:(id)arg1 paragraphMode:(_Bool)arg2;	// IMP=0x001000000043bb1f
- (struct CGPoint)knobCenterForSelection:(id)arg1 knob:(id)arg2;	// IMP=0x001000000043af17
- (id)newTrackerForKnob:(id)arg1;	// IMP=0x001000000043ac30
- (void)p_unregisterNotifications;	// IMP=0x001000000043aaff
- (void)p_registerNotifications;	// IMP=0x001000000043a9b9
- (id)cursorForPoint:(struct CGPoint)arg1 withCursorPlatformObject:(id)arg2;	// IMP=0x0010000000439da4
- (double)p_maximumBeamLength;	// IMP=0x0010000000439d96
- (id)cursorAtPoint:(struct CGPoint)arg1 forKnob:(id)arg2 withCursorPlatformObject:(id)arg3;	// IMP=0x0010000000439cb6
- (struct CGRect)p_closestCaretRectForPoint:(struct CGPoint)arg1 inSelection:(_Bool)arg2 allowPastBreak:(_Bool)arg3;	// IMP=0x001000000043983f
- (struct CGRect)p_closestCaretRectForCharacterAtPoint:(struct CGPoint)arg1;	// IMP=0x001000000043951c
- (struct CGRect)p_topicDragRectForSelection:(id)arg1;	// IMP=0x0010000000438d02
- (struct CGRect)p_caretRectForSelection:(id)arg1;	// IMP=0x0010000000438a0f
- (struct CGRect)caretRectForSelection:(id)arg1;	// IMP=0x0010000000438995
- (CDStruct_249a8bf0)wordMetricsAtCharIndex:(unsigned long long)arg1;	// IMP=0x00100000004387d5
- (CDStruct_9f83f5df)lineMetricsAtCharIndex:(unsigned long long)arg1;	// IMP=0x001000000043874b
- (CDStruct_9f83f5df)lineMetricsAtPoint:(struct CGPoint)arg1;	// IMP=0x001000000043872a
- (CDStruct_9f83f5df)p_lineMetricsAtPoint:(struct CGPoint)arg1 allowNotFound:(_Bool)arg2;	// IMP=0x001000000043860a
- (struct CGRect)caretRectForCharIndex:(unsigned long long)arg1 leadingEdge:(_Bool)arg2 caretAffinity:(int)arg3;	// IMP=0x001000000043851b
- (struct CGRect)caretRectForCharIndex:(unsigned long long)arg1 caretAffinity:(int)arg2;	// IMP=0x0010000000438491
- (struct CGPath *)p_newPathForSelection:(id)arg1 withTransform:(struct CGAffineTransform)arg2 withInset:(double)arg3;	// IMP=0x001000000043804c
- (const struct CGPath *)newPathForSelection:(id)arg1;	// IMP=0x0010000000437bd8
- (struct CGRect)rectForSelection:(id)arg1 includeRuby:(_Bool)arg2 includePaginatedAttachments:(_Bool)arg3;	// IMP=0x0010000000437b21
- (_Bool)isPointInSelectedArea:(struct CGPoint)arg1;	// IMP=0x00100000004376e9
- (_Bool)didPointHitSelectionEnd:(struct CGPoint)arg1;	// IMP=0x00100000004373f4
- (_Bool)containsPoint:(struct CGPoint)arg1 withPrecision:(_Bool)arg2;	// IMP=0x001000000043731a
- (struct CGRect)selectionRect;	// IMP=0x00100000004372a9
- (struct CGRect)caretRect;	// IMP=0x001000000043723e
- (struct CGPoint)pinToClosestColumn:(struct CGPoint)arg1;	// IMP=0x0010000000437191
- (struct CGPoint)pinToNaturalBounds:(struct CGPoint)arg1 andLastLineFragment:(_Bool)arg2;	// IMP=0x0010000000436d00
- (struct _NSRange)range;	// IMP=0x0010000000436b53
- (void)willBeRemoved;	// IMP=0x0010000000436b15
- (void)setParentRep:(id)arg1;	// IMP=0x00100000004368bb
- (void)dealloc;	// IMP=0x0010000000436839
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;	// IMP=0x001000000043664f
@property(readonly, nonatomic) CRLWPDragAndDropHelper *dragAndDropHelper; // @synthesize dragAndDropHelper=_dragAndDropHelper;
@property(readonly, nonatomic) NSObject<CRLContainerInfo> *containerInfo;
- (_Bool)shouldShowKnobs;	// IMP=0x0010000000436272
- (_Bool)p_shouldDisplaySelectionControls;	// IMP=0x001000000043625d
- (id)p_textEditorForStorage:(id)arg1;	// IMP=0x00100000002bb972
- (id)p_styleProvider;	// IMP=0x00100000002bb91b
- (id)dragItemsForBeginningDragOfChildRep:(id)arg1;	// IMP=0x00100000002bb913
- (id)p_dragItemsForBeginningDragWithSelection:(id)arg1 inlineRepBeingDragged:(id)arg2;	// IMP=0x00100000002bae9e
- (id)dragItemsForBeginningDragAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000002bad06
- (void)hideDragAndDropUI;	// IMP=0x00100000002babe2
- (void)updateDragAndDropUIForPoint:(struct CGPoint)arg1 dragInfo:(id)arg2;	// IMP=0x00100000002ba410
- (_Bool)handleDragOperation:(unsigned long long)arg1 withDragInfo:(id)arg2 atUnscaledPoint:(struct CGPoint)arg3;	// IMP=0x00100000002ba37c
- (unsigned long long)dragOperationForDragInfo:(id)arg1 atUnscaledPoint:(struct CGPoint)arg2;	// IMP=0x00100000002ba2ee
@property(nonatomic, readonly) NSArray *hyperlinkRegions;
- (id)contextMenuPreviewForHighlightingMenuAtPoint:(struct CGPoint)arg1 withConfiguration:(id)arg2;	// IMP=0x00100000009a0340
- (id)contextMenuConfigurationAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000009a0290

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _TtC8Freeform11CRLWPEditor *textEditor;

@end
