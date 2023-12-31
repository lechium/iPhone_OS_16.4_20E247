//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLTextInteractiveCanvasControllerAccessibility, CRLTextRepAccessibility, CRLWPSelectionAccessibility, CRLWPStorageAccessibility, NSString, _TtC8Freeform11CRLWPEditor;

@interface CRLTextEditorAccessibility
{
    _Bool _crlaxCurrentSelectionContainsComment;	// 8 = 0x8
}

+ (void)crlaxSetCommittingRemoteCommand:(_Bool)arg1;	// IMP=0x0020000000296fd1
+ (_Bool)crlaxCommittingRemoteCommand;	// IMP=0x0010000000296fc5
+ (Class)crlaxBaseSafeCategoryClass;	// IMP=0x0010000000296f92
+ (id)crlaxTargetClassName;	// IMP=0x0010000000296f85
@property(readonly, nonatomic) _Bool crlaxCurrentSelectionContainsComment; // @synthesize crlaxCurrentSelectionContainsComment=_crlaxCurrentSelectionContainsComment;
@property(readonly, nonatomic) _TtC8Freeform11CRLWPEditor *crlaxTarget;
- (id)_crlaxSelectionWithRange:(struct _NSRange)arg1;	// IMP=0x0010000000298258
- (_Bool)_crlaxIsACurrentEditor;	// IMP=0x001000000029823f
- (_Bool)_crlaxIsEditing;	// IMP=0x0010000000298226
- (id)_crlaxCurrentSelection;	// IMP=0x00100000002981a5
@property(readonly, nonatomic) Class _crlaxWPSelectionClass;
- (void)p_didInsertPBAtRange:(struct _NSRange)arg1 hasLabel:(_Bool)arg2 shouldTerminateList:(_Bool)arg3 newListStyle:(id)arg4 newLabelLength:(unsigned long long)arg5 newListOverridePropertyMap:(id)arg6;	// IMP=0x0010000000297f61
- (void)p_deleteBackwardsOnEmptyListWithRange:(struct _NSRange)arg1 ignoreLevel:(_Bool)arg2;	// IMP=0x0010000000297f32
- (void)selectionDidChangeFromSelection:(id)arg1 toSelection:(id)arg2 withFlags:(unsigned long long)arg3;	// IMP=0x0010000000297dab
- (_Bool)wantsParagraphModeWithSelectionPath:(id)arg1;	// IMP=0x0010000000297d0d
- (void)deleteBackward:(id)arg1;	// IMP=0x0010000000297ccc
- (void)replace:(id)arg1 with:(id)arg2;	// IMP=0x0010000000297c8b
- (id)crlaxListItemLabelForLineAtCurrentSelection;	// IMP=0x00100000002979f2
- (struct _NSRange)crlaxStorageRangeOfLineFragmentAtCharIndex:(unsigned long long)arg1;	// IMP=0x00100000002978f5
@property(readonly, nonatomic) _Bool crlaxCurrentSelectionContainsVisibleTrackedChanges;
- (_Bool)crlaxCanIndentParagraphLevelByDelta:(long long)arg1;	// IMP=0x00100000002977a4
- (void)crlaxPerformBlockAffectingTextSelection:(CDUnknownBlockType)arg1;	// IMP=0x0010000000297730
- (void)crlaxEditingRepContentsChanged;	// IMP=0x00100000002976ef
@property(readonly, nonatomic) NSString *crlaxEditorLabel;
@property(readonly, nonatomic) CRLTextInteractiveCanvasControllerAccessibility *crlaxInteractiveCanvasController;
@property(readonly, nonatomic) CRLWPStorageAccessibility *crlaxStorage;
- (id)crlaxEditingRepWithSelection;	// IMP=0x0010000000297337
@property(readonly, nonatomic) CRLTextRepAccessibility *crlaxEditingRepWithCaret;
@property(nonatomic, setter=crlaxSetSelectedTextRange:) struct _NSRange crlaxSelectedTextRange;
@property(readonly, nonatomic) CRLWPSelectionAccessibility *crlaxSelection;
@property(nonatomic, setter=_crlaxSetShouldSkipSelectionChangedNotification:) _Bool _crlaxShouldSkipSelectionChangedNotification;
- (_Bool)_crlaxIsDictating;	// IMP=0x001000000005b37f
- (void)crlaxHandleStorageRangeChanged;	// IMP=0x001000000005b36d
- (void)crlaxHandleSelectionChangedWithFlags:(unsigned long long)arg1;	// IMP=0x001000000005b2a9
- (void)crlaxHandleEditingRepContentsChanged;	// IMP=0x001000000005b17b
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;	// IMP=0x001000000005b166
- (id)accessibilityValue;	// IMP=0x001000000005b14d
- (void)insertDictationResult:(id)arg1;	// IMP=0x001000000005b10e
- (void)didBecomeTextInputRespondersEditor;	// IMP=0x001000000005b0cf
- (void)replaceAction:(id)arg1;	// IMP=0x001000000005b0a0
- (void)styleAction:(id)arg1;	// IMP=0x001000000005b071
- (void)definitionAction:(id)arg1;	// IMP=0x001000000005aedf
- (void)p_addSelectedTextItemsIntoMenu:(id)arg1;	// IMP=0x001000000005ae5c
- (void)deleteForward;	// IMP=0x001000000005ade4
- (void)deleteBackward;	// IMP=0x001000000005ad6c
- (void)insertText:(id)arg1;	// IMP=0x001000000005accd
- (void)selectAll:(id)arg1;	// IMP=0x001000000005ac60
- (void)paste:(id)arg1;	// IMP=0x001000000005ab89
- (void)copy:(id)arg1;	// IMP=0x001000000005aab2
- (void)cut:(id)arg1;	// IMP=0x001000000005a9db
- (void)assignIntProperty:(unsigned long long)arg1 value:(int)arg2 toSelection:(id)arg3 forParagraph:(_Bool)arg4;	// IMP=0x001000000005a8e3
- (void)crlaxInsertText:(id)arg1;	// IMP=0x001000000005a83d
- (void)crlaxSetSelectedTextRange:(struct _NSRange)arg1 skipSelectionChangedNotification:(_Bool)arg2;	// IMP=0x001000000005a511
@property(nonatomic, setter=crlaxSetShouldSuppressSpeechForNextSelectionChangedNotification:) _Bool crlaxShouldSuppressSpeechForNextSelectionChangedNotification;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

