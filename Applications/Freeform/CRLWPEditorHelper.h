//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLInteractiveCanvasController, CRLWPSelection, MISSING_TYPE, NSMutableDictionary, _TtC8Freeform11CRLWPEditor;
@protocol CRLWPTextSource;

@interface CRLWPEditorHelper : NSObject
{
    _Bool _selectionAnchorEdge;	// 8 = 0x8
    _Bool _selectionLastModifiedWithKeyboard;	// 9 = 0x9
    _Bool _continueKillRing;	// 10 = 0xa
    _TtC8Freeform11CRLWPEditor *_editor;	// 16 = 0x10
    CRLWPSelection *_anchorSelection;	// 24 = 0x18
    unsigned long long _selectionAnchor;	// 32 = 0x20
    id <CRLWPTextSource> _textSource;	// 40 = 0x28
    CRLInteractiveCanvasController *_interactiveCanvasController;	// 48 = 0x30
    NSMutableDictionary *_autocorrectedEntries;	// 56 = 0x38
    unsigned long long _lastChangedCharIndex;	// 64 = 0x40
    unsigned long long _correctionCharIndexToIgnoreHUD;	// 72 = 0x48
    struct _NSRange _emacsMarkRange;	// 80 = 0x50
    struct _NSRange _lastAutocorrectionRange;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000393762
@property(nonatomic) struct _NSRange lastAutocorrectionRange; // @synthesize lastAutocorrectionRange=_lastAutocorrectionRange;
@property(nonatomic) unsigned long long correctionCharIndexToIgnoreHUD; // @synthesize correctionCharIndexToIgnoreHUD=_correctionCharIndexToIgnoreHUD;
@property(nonatomic) unsigned long long lastChangedCharIndex; // @synthesize lastChangedCharIndex=_lastChangedCharIndex;
@property(retain, nonatomic) NSMutableDictionary *autocorrectedEntries; // @synthesize autocorrectedEntries=_autocorrectedEntries;
@property(retain, nonatomic) CRLInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_interactiveCanvasController;
@property(retain, nonatomic) id <CRLWPTextSource> textSource; // @synthesize textSource=_textSource;
@property(nonatomic) _Bool continueKillRing; // @synthesize continueKillRing=_continueKillRing;
@property(nonatomic) struct _NSRange emacsMarkRange; // @synthesize emacsMarkRange=_emacsMarkRange;
@property(nonatomic) _Bool selectionLastModifiedWithKeyboard; // @synthesize selectionLastModifiedWithKeyboard=_selectionLastModifiedWithKeyboard;
@property(nonatomic) _Bool selectionAnchorEdge; // @synthesize selectionAnchorEdge=_selectionAnchorEdge;
@property(nonatomic) unsigned long long selectionAnchor; // @synthesize selectionAnchor=_selectionAnchor;
@property(retain, nonatomic) CRLWPSelection *anchorSelection; // @synthesize anchorSelection=_anchorSelection;
@property(nonatomic) __weak _TtC8Freeform11CRLWPEditor *editor; // @synthesize editor=_editor;
- (unsigned long long)p_indexToTransposableCharacterStartingAtIndex:(unsigned long long)arg1 filterStorage:(id)arg2 searchTowardsStorageStart:(_Bool)arg3;	// IMP=0x0010000000393562
- (long long)p_layoutIndexForCharIndex:(unsigned long long)arg1 leadingEdge:(_Bool)arg2;	// IMP=0x0010000000393504
- (unsigned long long)p_selectionEdgeToMutateWithLeadingEdge:(_Bool *)arg1 Direction:(long long)arg2 newAnchor:(unsigned long long *)arg3 anchorLeadingEdge:(_Bool *)arg4;	// IMP=0x00100000003925ac
- (unsigned long long)p_selectionEdgeToMutateWithDirection:(long long)arg1 newAnchor:(unsigned long long *)arg2;	// IMP=0x0010000000391a4b
- (unsigned long long)selectionEdgeToMutateWithDirection:(long long)arg1 newAnchor:(unsigned long long *)arg2;	// IMP=0x0010000000391a39
- (unsigned long long)backwardSelectionAnchor;	// IMP=0x0010000000391a03
- (unsigned long long)forwardSelectionAnchor;	// IMP=0x00100000003919d0
- (unsigned long long)backwardSelectionEdge;	// IMP=0x001000000039199f
- (unsigned long long)forwardSelectionEdge;	// IMP=0x0010000000391971
- (unsigned long long)p_oppositeEdgeForSelection:(id)arg1 withLeadingEdge:(_Bool *)arg2;	// IMP=0x001000000039147c
- (_Bool)p_setSelectionWithCharIndex:(unsigned long long)arg1 andAnchor:(unsigned long long)arg2;	// IMP=0x001000000039137d
- (_Bool)p_setVisualSelectionWithCharIndex:(unsigned long long)arg1 leadingEdge:(_Bool)arg2 andAnchor:(unsigned long long)arg3 andAnchorLeadingEdge:(_Bool)arg4;	// IMP=0x00100000003910b2
- (unsigned long long)getVisualInsertionPointIndexForString:(id)arg1 selection:(id)arg2;	// IMP=0x001000000039054b
- (void)capitalizeWord:(id)arg1;	// IMP=0x0010000000390401
- (void)lowercaseWord:(id)arg1;	// IMP=0x00100000003902b7
- (void)uppercaseWord:(id)arg1;	// IMP=0x001000000039016d
- (void)p_transformWordWithActionString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000038f984
- (void)replaceRange:(struct _NSRange)arg1 withText:(id)arg2;	// IMP=0x001000000038f8bb
- (void)p_replaceRange:(struct _NSRange)arg1 withText:(id)arg2 dictationAndAutocorrectionKey:(id)arg3 applyingDictationAlternative:(_Bool)arg4 restoreSelection:(id)arg5;	// IMP=0x001000000038ebba
- (_Bool)isACurrentEditor;	// IMP=0x001000000038eae9
- (id)protectedSelectionBehaviorForCommand:(id)arg1;	// IMP=0x001000000038e95b
- (void)p_removeAutocorrectionAtCharIndex:(unsigned long long)arg1;	// IMP=0x001000000038e955
- (MISSING_TYPE *)p_transposeRanges:withRange: /* Error: Ran out of types for this method. */;	// IMP=0x001000000038ddae
- (void)transposeWords:(id)arg1;	// IMP=0x001000000038d8f1
- (void)transpose:(id)arg1;	// IMP=0x001000000038d514
- (_Bool)p_filteredRangeCanBeTransposed:(struct _NSRange)arg1 inFilteredStorage:(id)arg2;	// IMP=0x001000000038d4fc
- (_Bool)p_storageRangeCanBeTransposed:(struct _NSRange)arg1 storage:(id)arg2;	// IMP=0x001000000038d4f4
- (void)swapWithMark:(id)arg1;	// IMP=0x001000000038d3d8
- (void)selectToMark:(id)arg1;	// IMP=0x001000000038d2a4
- (void)deleteToMark:(id)arg1;	// IMP=0x001000000038d167
- (struct _NSRange)p_sanitizeMark;	// IMP=0x001000000038d08c
- (void)setMark:(id)arg1;	// IMP=0x001000000038cfcd
- (void)yankAndSelect:(id)arg1;	// IMP=0x001000000038ce1d
- (void)yank:(id)arg1;	// IMP=0x001000000038cca5
- (void)deleteToEndOfParagraph:(id)arg1;	// IMP=0x001000000038c9b2
- (void)deleteToBeginningOfParagraph:(id)arg1;	// IMP=0x001000000038c86b
- (void)deleteToEndOfLine:(id)arg1;	// IMP=0x001000000038c727
- (void)deleteToBeginningOfLine:(id)arg1;	// IMP=0x001000000038c5e0
- (void)deleteWordBackward:(id)arg1;	// IMP=0x001000000038c49e
- (void)deleteWordForward:(id)arg1;	// IMP=0x001000000038c35f
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)arg1;	// IMP=0x001000000038c31e
- (_Bool)wantsToReceiveTextInput;	// IMP=0x001000000038c2c6
- (void)p_deleteSelectionBackward:(_Bool)arg1 decomposeCharacter:(_Bool)arg2 smart:(_Bool)arg3 kill:(_Bool)arg4;	// IMP=0x001000000038b72c
- (void)p_clearEditMenuFlags;	// IMP=0x001000000038b726
- (void)clearMarkedRange;	// IMP=0x001000000038b720
- (id)characterStyleForDeletedRange:(struct _NSRange)arg1;	// IMP=0x001000000038b66b
- (unsigned long long)getVisualDeletionIndexForSelection:(id)arg1 backward:(_Bool *)arg2;	// IMP=0x001000000038ae93
- (const void *)p_lineFragmentWithCaretInfo:(out CDStruct_7549c2a6 *)arg1 forSelection:(id)arg2;	// IMP=0x001000000038a6d8
- (_Bool)editorKeyboardLanguageIsRTL;	// IMP=0x001000000038a678
- (id)editorKeyboardLanguage;	// IMP=0x001000000038a66e
- (void)p_deleteBackwardsOnEmptyListWithRange:(struct _NSRange)arg1 ignoreLevel:(_Bool)arg2;	// IMP=0x001000000038a668
- (id)styleProvider;	// IMP=0x001000000038a660
- (_Bool)areCollabUserActionsCurrentlyPermitted;	// IMP=0x001000000038a658
- (void)insertNewlineIgnoringFieldEditor:(id)arg1;	// IMP=0x001000000038a600
- (void)insertParagraphSeparator:(id)arg1;	// IMP=0x001000000038a5a8
- (void)notifySelectionChangedWithFlags:(unsigned long long)arg1;	// IMP=0x001000000038a3d8
- (void)complete:(id)arg1;	// IMP=0x001000000038a3d2
- (_Bool)p_canReplaceSelection;	// IMP=0x001000000038a323
- (void)centerSelectionInVisibleArea:(id)arg1;	// IMP=0x001000000038a31d
- (struct CGRect)p_viewRectForSelection:(id)arg1;	// IMP=0x0010000000389dcf
- (void)moveToEndOfDocumentAndModifySelection:(id)arg1;	// IMP=0x0010000000389d01
- (void)moveToBeginningOfDocumentAndModifySelection:(id)arg1;	// IMP=0x0010000000389c79
- (void)moveToEndOfDocument:(id)arg1;	// IMP=0x0010000000389b90
- (void)moveToBeginningOfDocument:(id)arg1;	// IMP=0x0010000000389aef
- (void)moveParagraphBackwardAndModifySelection:(id)arg1;	// IMP=0x001000000038996a
- (void)moveParagraphForwardAndModifySelection:(id)arg1;	// IMP=0x001000000038982a
- (void)moveParagraphBackward:(id)arg1;	// IMP=0x00100000003897cd
- (void)moveParagraphForward:(id)arg1;	// IMP=0x0010000000389770
- (void)moveToEndOfParagraphAndModifySelection:(id)arg1;	// IMP=0x001000000038957e
- (void)moveToBeginningOfParagraphAndModifySelection:(id)arg1;	// IMP=0x001000000038949a
- (void)moveToEndOfParagraph:(id)arg1;	// IMP=0x00100000003892d7
- (void)moveToBeginningOfParagraph:(id)arg1;	// IMP=0x00100000003891e0
- (void)moveToEndOfLineAndModifySelection:(id)arg1;	// IMP=0x001000000038905f
- (void)moveToBeginningOfLineAndModifySelection:(id)arg1;	// IMP=0x0010000000388f7a
- (void)moveToEndOfLine:(id)arg1;	// IMP=0x0010000000388dd3
- (void)moveToBeginningOfLine:(id)arg1;	// IMP=0x0010000000388cdb
- (void)moveToRightEndOfLineAndModifySelection:(id)arg1;	// IMP=0x0010000000388cc3
- (void)moveToLeftEndOfLineAndModifySelection:(id)arg1;	// IMP=0x0010000000388cae
- (void)p_extendToEndOfLineRight:(_Bool)arg1;	// IMP=0x0010000000388a79
- (void)moveToRightEndOfLine:(id)arg1;	// IMP=0x0010000000388a61
- (void)moveToLeftEndOfLine:(id)arg1;	// IMP=0x0010000000388a4c
- (void)p_moveToEndOfLineRight:(_Bool)arg1;	// IMP=0x0010000000388806
- (void)p_setSelectionFromKeyboardWithRange:(struct _NSRange)arg1 leadingEdge:(_Bool)arg2 endOfLine:(_Bool)arg3 allowEndOfLineChange:(_Bool)arg4;	// IMP=0x0010000000388271
- (void)setSelectionFromKeyboardWithRange:(struct _NSRange)arg1 leadingEdge:(_Bool)arg2 endOfLine:(_Bool)arg3;	// IMP=0x001000000038824f
- (void)selectWordWithFlags:(unsigned long long)arg1;	// IMP=0x0010000000387fec
- (void)selectWord:(id)arg1;	// IMP=0x0010000000387fd7
- (void)selectLine:(id)arg1;	// IMP=0x0010000000387c16
- (void)selectParagraph:(id)arg1;	// IMP=0x0010000000387a7f
- (void)moveWordBackwardAndModifySelection:(id)arg1;	// IMP=0x0010000000387a67
- (void)moveWordForwardAndModifySelection:(id)arg1;	// IMP=0x0010000000387a52
- (void)moveWordAndModifySelectionInStorageDirection:(int)arg1;	// IMP=0x0010000000387877
- (void)moveWordBackward:(id)arg1;	// IMP=0x0010000000387722
- (void)moveWordForward:(id)arg1;	// IMP=0x00100000003875e0
- (_Bool)p_isCharIndex:(unsigned long long)arg1 withEolAffinity:(_Bool)arg2 atBoundary:(int)arg3 inDirection:(long long)arg4;	// IMP=0x0010000000386d12
- (long long)p_writingDirectionForCharAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000386a0e
- (_Bool)p_isCharIndex:(unsigned long long)arg1 withinTextUnit:(int)arg2 inDirection:(long long)arg3;	// IMP=0x001000000038664f
- (void)p_moveWordAndModifySelectionInLayoutDirection:(int)arg1;	// IMP=0x0010000000386414
- (void)moveWordLeftAndModifySelection:(id)arg1;	// IMP=0x00100000003863fc
- (void)moveWordRightAndModifySelection:(id)arg1;	// IMP=0x00100000003863e4
- (void)moveWordLeft:(id)arg1;	// IMP=0x00100000003863cc
- (void)moveWordRight:(id)arg1;	// IMP=0x00100000003863b4
- (void)moveWordInLayoutDirection:(int)arg1;	// IMP=0x0010000000385f9e
- (_Bool)p_isEdgeAtCharIndex:(unsigned long long)arg1 leadingEdge:(_Bool)arg2 withinWordInDirection:(long long)arg3;	// IMP=0x0010000000385ed1
- (void)moveDownAndModifySelection:(id)arg1;	// IMP=0x0010000000385d5f
- (void)moveUpAndModifySelection:(id)arg1;	// IMP=0x0010000000385b4a
- (void)moveDown:(id)arg1;	// IMP=0x0010000000385880
- (void)moveUp:(id)arg1;	// IMP=0x0010000000385745
- (double)preferredOffsetFromSelection:(id)arg1;	// IMP=0x0010000000385737
- (void)moveForwardAndModifySelection:(id)arg1;	// IMP=0x0010000000385684
- (void)moveBackwardAndModifySelection:(id)arg1;	// IMP=0x00100000003855c9
- (void)moveLeftAndModifySelection:(id)arg1;	// IMP=0x00100000003855b4
- (void)moveRightAndModifySelection:(id)arg1;	// IMP=0x001000000038559c
- (void)p_moveAndModifySelectionRight:(_Bool)arg1;	// IMP=0x0010000000384e74
- (_Bool)p_adjustSelection:(id)arg1 forWordWithCharIndex:(unsigned long long)arg2;	// IMP=0x0010000000384ba4
- (id)logicalToVisualSelection:(id)arg1;	// IMP=0x0010000000383de2
- (struct _NSRange)rangeOfWordEnclosingCharIndex:(unsigned long long)arg1 backward:(_Bool)arg2;	// IMP=0x0010000000383cf3
- (void)moveLeft:(id)arg1;	// IMP=0x0010000000383cdb
- (void)moveBackward:(id)arg1;	// IMP=0x0010000000383bfe
- (void)moveRight:(id)arg1;	// IMP=0x0010000000383be9
- (void)p_moveInLineLayoutDirectionLeft:(_Bool)arg1;	// IMP=0x00100000003836e6
- (unsigned long long)p_leftEdgeForSelection:(id)arg1 withLeadingEdge:(inout _Bool *)arg2;	// IMP=0x0010000000382fe1
- (unsigned long long)p_rightEdgeForSelection:(id)arg1 withLeadingEdge:(inout _Bool *)arg2;	// IMP=0x0010000000382c7a
- (void)moveForward:(id)arg1;	// IMP=0x0010000000382ba0
- (unsigned long long)charIndexMovingByCharacterFromCharIndex:(unsigned long long)arg1 leadingEdge:(inout _Bool *)arg2 inDirection:(long long)arg3 skipAnchors:(_Bool)arg4 useLeadingEdgeOfNextLine:(_Bool)arg5;	// IMP=0x0010000000381dbd
- (unsigned long long)p_charIndexByMovingCharIndex:(unsigned long long)arg1 withEolAffinity:(inout _Bool *)arg2 toBoundary:(int)arg3 inDirection:(long long)arg4 preferPosition:(inout double *)arg5 isLeadingEdge:(inout _Bool *)arg6;	// IMP=0x00100000003804cd
- (unsigned long long)charIndexForEndOfLineFromCharIndex:(unsigned long long)arg1;	// IMP=0x001000000038048b
- (unsigned long long)charIndexForBeginningOfLineFromCharIndex:(unsigned long long)arg1;	// IMP=0x0010000000380448
- (unsigned long long)p_charIndexByMovingPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 preferPosition:(double *)arg4 outEolAffinity:(int *)arg5;	// IMP=0x00100000003801fa
- (unsigned long long)charIndexByMovingPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 preferPosition:(double *)arg4;	// IMP=0x00100000003801d7
- (unsigned long long)p_layoutOrderCharIndexForCaretCharIndex:(unsigned long long)arg1 inDirection:(long long)arg2;	// IMP=0x001000000037fe19
- (unsigned long long)caretCharIndexForLayoutOrderCharIndex:(unsigned long long)arg1 inDirection:(long long)arg2;	// IMP=0x001000000037fa5b
- (void)withLineFragmentForCharIndex:(unsigned long long)arg1 eol:(_Bool)arg2 performBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000037f687
- (void)p_withLayoutTargetForCharIndex:(unsigned long long)arg1 eolAffinity:(_Bool)arg2 performBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000037f5d7
- (id)layout;	// IMP=0x001000000037f4b2
- (void)p_withLineIndexForCharIndex:(unsigned long long)arg1 eol:(_Bool)arg2 performBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000037f1e1
- (unsigned long long)p_lineIndexForMovingCharIndex:(unsigned long long)arg1 column:(id *)arg2 up:(_Bool)arg3 atStart:(_Bool)arg4 eol:(inout _Bool *)arg5;	// IMP=0x001000000037e434
- (unsigned long long)p_lastVisibleCharIndexForCharIndex:(unsigned long long)arg1;	// IMP=0x001000000037e141
- (_Bool)p_withLineFragmentsForLogicalLineContainingCharIndex:(unsigned long long)arg1 eol:(_Bool)arg2 performBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000037dbb6
- (const void *)p_lineFragmentForCharIndex:(unsigned long long)arg1 column:(id *)arg2 eol:(_Bool)arg3;	// IMP=0x001000000037dac3
- (unsigned long long)charIndexMovingByWordFromCharIndex:(unsigned long long)arg1 leadingEdge:(inout _Bool *)arg2 inDirection:(long long)arg3;	// IMP=0x001000000037d14c
- (struct _NSRange)availableSelectionRangeForCharIndex:(unsigned long long)arg1;	// IMP=0x001000000037d05c
- (struct _NSRange)selectionRangeForCharIndex:(unsigned long long)arg1;	// IMP=0x001000000037d04a
- (unsigned long long)p_adjustedCharIndexForWordTestingFromCharIndex:(unsigned long long)arg1 leadingEdge:(_Bool)arg2 forDirection:(long long)arg3;	// IMP=0x001000000037c7ee
- (void)p_adjustSelection:(id)arg1 withOtherSelection:(id)arg2 textSelectionGranularity:(unsigned long long)arg3;	// IMP=0x001000000037c034
- (struct _NSRange)adjustVisualSelection:(id)arg1 withOtherSelection:(id)arg2 outLeadingEdge:(out _Bool *)arg3 outCaretAffinity:(out int *)arg4;	// IMP=0x001000000037b6e5
- (unsigned long long)p_leftCharForInsertion:(const CDStruct_43c8ebdc *)arg1;	// IMP=0x001000000037b572
- (void)p_selection:(id)arg1 toGlyphRange:(out CDStruct_43c8ebdc *)arg2;	// IMP=0x001000000037b17b
- (id)calculateVisualRunsFromSelection:(id)arg1 updateControllerSelection:(_Bool)arg2;	// IMP=0x0010000000379b6b
- (_Bool)p_isLayoutLeftToRightAtCharIndex:(unsigned long long)arg1;	// IMP=0x0010000000379ac8
- (struct _NSRange)p_expandParagraphRangeForEnumerator:(inout struct CRLWPParagraphEnumerator *)arg1;	// IMP=0x0010000000379a2e
- (unsigned long long)charIndexMovingByCharacterFromCharIndex:(unsigned long long)arg1 leadingEdge:(inout _Bool *)arg2 inDirection:(long long)arg3 skipAnchors:(_Bool)arg4;	// IMP=0x0010000000379a0c
- (unsigned long long)charIndexMovingByCharacterFromCharIndex:(unsigned long long)arg1 inDirection:(long long)arg2;	// IMP=0x00100000003796ee
- (unsigned long long)charIndexMovingBackwardByCharacterFromCharIndex:(unsigned long long)arg1;	// IMP=0x00100000003796d7
- (unsigned long long)charIndexMovingForwardByCharacterFromCharIndex:(unsigned long long)arg1;	// IMP=0x00100000003796c3
- (struct __CFStringTokenizer *)createTokenizerForCharIndex:(unsigned long long)arg1 outTokenizerRange:(out struct _NSRange *)arg2;	// IMP=0x00100000003795bf
- (unsigned long long)p_moveFromCharIndex:(inout unsigned long long *)arg1 leadingEdge:(inout _Bool *)arg2 tokenizerRef:(inout struct __CFStringTokenizer **)arg3 tokenizerRange:(inout struct _NSRange *)arg4 direction:(long long)arg5 currentWordRange:(struct _NSRange)arg6 newWordRange:(out struct _NSRange *)arg7 reasonToStop:(unsigned long long)arg8;	// IMP=0x0010000000378fe8
- (void)setSelectionWithRange:(struct _NSRange)arg1 endOfLine:(_Bool)arg2 withFlags:(unsigned long long)arg3;	// IMP=0x00100000003789df
- (void)setSelectionWithRange:(struct _NSRange)arg1 endOfLine:(_Bool)arg2;	// IMP=0x00100000003789c7
- (id)selection;	// IMP=0x00100000003788dd
- (struct CRLWPParagraphEnumerator)paragraphEnumeratorAtCharIndex:(unsigned long long)arg1 styleProvider:(id)arg2;	// IMP=0x00100000003787ac
- (struct CRLWPParagraphEnumerator)paragraphEnumeratorAtCharIndex:(unsigned long long)arg1;	// IMP=0x001000000037878a
- (Class)wpSelectionClass;	// IMP=0x0010000000378779
- (struct _NSRange)p_rangeForSelectionAtCharIndex:(unsigned long long)arg1 caretIndex:(unsigned long long)arg2 handleNextWordWhitespace:(_Bool)arg3;	// IMP=0x0010000000378080
- (struct _NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(_Bool)arg2 includeHyphenation:(_Bool)arg3;	// IMP=0x0010000000377f7e
- (struct _NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(_Bool)arg2;	// IMP=0x0010000000377f69
- (struct _NSRange)scanLeftForWordAtCharIndex:(unsigned long long)arg1;	// IMP=0x0010000000377e83
- (_Bool)hasWhitespaceBoundedWordAtSelection:(id)arg1;	// IMP=0x0010000000377423
- (struct _NSRange)whiteSpaceRangeAtCharIndex:(unsigned long long)arg1 includingBreaks:(_Bool)arg2;	// IMP=0x00100000003771d4
- (struct _NSRange)whiteSpaceRangeAtCharIndex:(unsigned long long)arg1;	// IMP=0x00100000003771bd
- (struct _NSRange)rangeForSelectionAtCharIndex:(unsigned long long)arg1 caretIndex:(unsigned long long)arg2;	// IMP=0x00100000003771a5
- (struct _NSRange)rangeForSelectionAtCharIndex:(unsigned long long)arg1 includePreviousWord:(_Bool)arg2;	// IMP=0x0010000000376fb5
- (id)editorController;	// IMP=0x0010000000376f51
- (id)initWithTextSource:(id)arg1 icc:(id)arg2;	// IMP=0x0010000000376e8c

@end
