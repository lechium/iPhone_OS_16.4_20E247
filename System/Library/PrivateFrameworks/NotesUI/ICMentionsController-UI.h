//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICMentionsController.h>

@class NSString;

@interface ICMentionsController (UI)
+ (_Bool)hasMentionInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00100000000fa528
+ (struct _NSRange)rangeOfUnconfirmedMentionInTextStorage:(id)arg1;	// IMP=0x00100000000fa087
- (void)applyUnconfirmedMentionToTextStorage:(id)arg1 participants:(id)arg2 range:(struct _NSRange)arg3 textView:(id)arg4 mentionString:(id)arg5;	// IMP=0x00100000000fa7b8
- (void)sendPendingNotificationsAfterDelay:(unsigned long long)arg1 forNote:(id)arg2;	// IMP=0x00100000000fa403
- (void)tableCellFirstResponderChangedInNote:(id)arg1;	// IMP=0x00100000000fa3e9
- (void)newlineEnteredInNote:(id)arg1;	// IMP=0x00100000000fa3cf
- (void)insertMentionWithText:(id)arg1 uuidString:(id)arg2 parentAttachment:(id)arg3;	// IMP=0x00100000000fa256
- (void)clearUnconfirmedMentionInTextStorage:(id)arg1;	// IMP=0x00100000000fa1ac
- (_Bool)checkForMentionInEditedRange:(struct _NSRange)arg1 ofTextStorage:(id)arg2 note:(id)arg3 textView:(id)arg4 allowAutoExplicitMention:(_Bool)arg5 isEndingEditing:(_Bool)arg6 languageHasSpaces:(_Bool)arg7 parentAttachment:(id)arg8;	// IMP=0x00100000000f94f1
- (void)registerForContactsChangedNotification;	// IMP=0x00100000000f92ce
- (id)fetchContactNamesForParticipants:(id)arg1;	// IMP=0x00100000000f90a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

