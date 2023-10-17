//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesUI/ICTextController.h>

@interface ICTextController (ICChecklistSortAnimation)
+ (_Bool)needsToShowFirstTimeAutoSortChecklistAlert;	// IMP=0x003000000011305a
+ (void)setChecklistAutoSortEnabled:(_Bool)arg1;	// IMP=0x003000000010efec
+ (_Bool)checklistAutoSortEnabled;	// IMP=0x003000000010efcc
+ (void)setChecklistAutoAlertShown:(_Bool)arg1;	// IMP=0x003000000010ef72
+ (_Bool)checklistAutoAlertShown;	// IMP=0x003000000010ef20
- (id)imageInfoForTrackedParagraph:(id)arg1 textView:(id)arg2 characterRangeToRender:(struct _NSRange)arg3 visibleRectToRender:(struct CGRect)arg4;	// IMP=0x0010000000109a49
- (void)setFinalFramesForSortedInfos:(id)arg1 textView:(id)arg2 textContainerOrigin:(struct CGPoint)arg3 todoUUIDsToImageViews:(id)arg4;	// IMP=0x0010000000109787
- (void)addImageViewsAfterSortIfNecessaryForTrackedInfos:(id)arg1 existingInfos:(id)arg2 textView:(id)arg3 textContainerOrigin:(struct CGPoint)arg4 todoUUIDsToImageViews:(id)arg5;	// IMP=0x001000000010943d
- (void)addImageViewsBeforeSortIfNecessaryForTrackedInfos:(id)arg1 textView:(id)arg2 textContainerOrigin:(struct CGPoint)arg3 todoUUIDsToImageViews:(id)arg4;	// IMP=0x00100000001091e5
- (void)performAnimatedSortForTrackedParagraphs:(id)arg1 expandedRange:(struct _NSRange)arg2 textView:(id)arg3 sortChecklistsBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000108619
- (id)analyticsInfoForChecklistAtIndex:(unsigned long long)arg1 textView:(id)arg2;	// IMP=0x00100000001130ac
- (void)showFirstTimeAutoSortEnabledAlertWithTextView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 analyticsHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000112b50
- (void)showFirstTimeAutoSortEnabledAlertIfNecessaryWithTextView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 analyticsHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000112a8d
- (void)autoSortChecklistForUnitTestAtIndex:(unsigned long long)arg1 textView:(id)arg2;	// IMP=0x0010000000112a1e
- (void)autoSortChecklistIfNecessaryForTrackedParagraph:(id)arg1 textView:(id)arg2 analyticsHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000112846
- (id)paragraphInfoForCharacterAtIndex:(unsigned long long)arg1 includeChildren:(_Bool)arg2 textStorage:(id)arg3;	// IMP=0x0010000000112450
- (_Bool)containsAnyTodoItemMarkedCompleted:(_Bool)arg1 inRange:(struct _NSRange)arg2 textStorage:(id)arg3;	// IMP=0x0010000000112223
- (id)rangeForChecklistItemInRange:(struct _NSRange)arg1 textStorage:(id)arg2;	// IMP=0x0010000000112106
- (id)trackedParagraphsForTodosInRange:(struct _NSRange)arg1 textStorage:(id)arg2;	// IMP=0x0010000000111ec2
- (id)rangesForTodosInRange:(struct _NSRange)arg1 markedCompleted:(_Bool)arg2 textStorage:(id)arg3;	// IMP=0x0010000000111c66
- (struct _NSRange)expandedRangeForContiguousTodosForRange:(struct _NSRange)arg1 textView:(id)arg2;	// IMP=0x0010000000111a02
- (id)sortTrackedParagraphsMovingCheckedItemsToBottom:(id)arg1;	// IMP=0x00100000001118df
- (id)createTreeFromTrackedParagraphs:(id)arg1 textView:(id)arg2;	// IMP=0x001000000011148d
- (void)applySortFromOriginalParagraphs:(id)arg1 sortedTrackedParagraphs:(id)arg2 forTextView:(id)arg3 checklistRange:(struct _NSRange)arg4;	// IMP=0x00100000001109fe
- (_Bool)moveCheckedChecklistsToBottomInTextView:(id)arg1 forRange:(struct _NSRange)arg2 animated:(_Bool)arg3;	// IMP=0x00100000001105b4
- (_Bool)moveCheckedChecklistsToBottomInTextView:(id)arg1 forRange:(struct _NSRange)arg2;	// IMP=0x001000000011059f
- (_Bool)canMoveCheckedChecklistsToBottomInTextView:(id)arg1 forRange:(struct _NSRange)arg2;	// IMP=0x0010000000110488
- (id)validAdjacentParagraphInfoFromParagraphInfo:(id)arg1 inDirection:(unsigned long long)arg2 inTextView:(id)arg3;	// IMP=0x00100000001102db
- (id)adjacentTrackedParagraphFromTrackedParagraph:(id)arg1 inDirection:(unsigned long long)arg2 inTextView:(id)arg3;	// IMP=0x00100000001101cc
- (id)expandedChecklistTrackedParagraphsInTextView:(id)arg1 forIndex:(long long)arg2;	// IMP=0x00100000001100c8
- (_Bool)canMoveListItemInDirection:(unsigned long long)arg1 inTextView:(id)arg2 forRange:(struct _NSRange)arg3;	// IMP=0x001000000010fffa
- (_Bool)moveListItemInDirection:(unsigned long long)arg1 inTextView:(id)arg2 forRange:(struct _NSRange)arg3;	// IMP=0x001000000010fd6e
- (void)removeChecklistItemsMarkedCompleted:(_Bool)arg1 inTextView:(id)arg2 forRanges:(id)arg3;	// IMP=0x001000000010f5c2
- (_Bool)checklistItemExistsMarkedCompleted:(_Bool)arg1 inTextView:(id)arg2 forRanges:(id)arg3;	// IMP=0x001000000010f2e8
- (void)markAllChecklistItemsCompleted:(_Bool)arg1 inTextview:(id)arg2 forSelectedRanges:(id)arg3;	// IMP=0x001000000010f0af
- (void)sendTextDidChangeNotificationForTextView:(id)arg1;	// IMP=0x001000000010f00c
@end
