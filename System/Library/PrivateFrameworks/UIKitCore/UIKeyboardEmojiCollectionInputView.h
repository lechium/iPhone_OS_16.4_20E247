//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSIndexPath, NSString, TUIEmojiSearchInputViewController, TUIEmojiSearchTextField, UICollectionViewFlowLayout, UIKBTree, UIKeyboardEmojiCategory, UIKeyboardEmojiCollectionView, UIKeyboardEmojiGraphicsTraits, UIResponder;
@protocol UIKBEmojiHitTestResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionInputView
{
    UIKeyboardEmojiCollectionView *_collectionView;	// 8 = 0x8
    UICollectionViewFlowLayout *_flowLayout;	// 16 = 0x10
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;	// 24 = 0x18
    _Bool _isDraggingInputView;	// 32 = 0x20
    unsigned long long _currentSection;	// 40 = 0x28
    _Bool _inputDelegateCanSupportAnimoji;	// 48 = 0x30
    _Bool _hasShownAnimojiFirstTimeExperience;	// 49 = 0x31
    _Bool _shouldRetryFetchingAnimojiRecents;	// 50 = 0x32
    _Bool _useWideAnimojiCell;	// 51 = 0x33
    _Bool _hasShownAnimojiCell;	// 52 = 0x34
    double _frameInset;	// 56 = 0x38
    _Bool _showingVariants;	// 64 = 0x40
    long long _selectedVariant;	// 72 = 0x48
    long long _currentVariantRow;	// 80 = 0x50
    UIKBTree *_selectedPopupKey;	// 88 = 0x58
    _Bool _supportsMemoji;	// 96 = 0x60
    _Bool _hasCheckedMemojiPreference;	// 97 = 0x61
    _Bool _currentlyCheckingMemojiPreference;	// 98 = 0x62
    _Bool _isSearching;	// 99 = 0x63
    UIKeyboardEmojiCategory *_category;	// 104 = 0x68
    CDUnknownBlockType _completionBlock;	// 112 = 0x70
    UIResponder<UIKBEmojiHitTestResponder> *_hitTestResponder;	// 120 = 0x78
    NSIndexPath *_tappedSkinToneEmoji;	// 128 = 0x80
    TUIEmojiSearchInputViewController *_emojiSearchInputViewController;	// 136 = 0x88
    TUIEmojiSearchTextField *_emojiSearchField;	// 144 = 0x90
    NSIndexPath *_selectedIndexPath;	// 152 = 0x98
    NSArray *_searchResults;	// 160 = 0xa0
}

+ (_Bool)shouldHighlightEmoji:(id)arg1;	// IMP=0x0010000000b454ff
+ (_Bool)wantsScreenTraits;	// IMP=0x0010000000b401e0
- (void).cxx_destruct;	// IMP=0x0000000000b4c542
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property _Bool isSearching; // @synthesize isSearching=_isSearching;
@property _Bool currentlyCheckingMemojiPreference; // @synthesize currentlyCheckingMemojiPreference=_currentlyCheckingMemojiPreference;
@property _Bool hasCheckedMemojiPreference; // @synthesize hasCheckedMemojiPreference=_hasCheckedMemojiPreference;
@property _Bool supportsMemoji; // @synthesize supportsMemoji=_supportsMemoji;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) TUIEmojiSearchTextField *emojiSearchField; // @synthesize emojiSearchField=_emojiSearchField;
@property(retain, nonatomic) TUIEmojiSearchInputViewController *emojiSearchInputViewController; // @synthesize emojiSearchInputViewController=_emojiSearchInputViewController;
@property(nonatomic) __weak NSIndexPath *tappedSkinToneEmoji; // @synthesize tappedSkinToneEmoji=_tappedSkinToneEmoji;
@property(nonatomic) __weak UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly) _Bool isDraggingInputView; // @synthesize isDraggingInputView=_isDraggingInputView;
@property __weak UIKeyboardEmojiCategory *category; // @synthesize category=_category;
- (long long)updateToCategoryWithOffsetPercentage:(double)arg1;	// IMP=0x0000000000b4bfc3
- (void)updateOffsetForSearchResults;	// IMP=0x0000000000b4bcb0
- (void)updateToCategory:(long long)arg1;	// IMP=0x0000000000b4b647
- (void)didMoveToWindow;	// IMP=0x0000000000b4b05f
- (long long)indexForPrettyCategoryDisplay:(id)arg1;	// IMP=0x0000000000b4af79
- (double)snappedXOffsetForOffset:(double)arg1 scrubbing:(_Bool)arg2;	// IMP=0x0000000000b4aac5
- (double)_recentlyUsedMediaRoundedOffset:(double)arg1 recentlyUsedMediaCellWidth:(double)arg2;	// IMP=0x0000000000b4a9c0
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000b4a7a3
- (id)firstFullyVisibleHeader;	// IMP=0x0000000000b4a544
- (id)itemInRect:(struct CGRect)arg1;	// IMP=0x0000000000b4a368
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000b4a336
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000b4a251
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000b4a234
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000b4a1a6
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000b4a10f
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000b4a078
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000b49f1f
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000b49c3c
- (void)emojiSearchDidReceiveResults:(id)arg1 forExactQuery:(id)arg2 autocorrectedQuery:(id)arg3;	// IMP=0x0000000000b49682
- (void)emojiSearchTextFieldDidReset:(id)arg1;	// IMP=0x0000000000b494bf
- (void)emojiSearchTextFieldWillClear:(id)arg1;	// IMP=0x0000000000b4947b
- (void)emojiSearchTextFieldDidBecomeInactive:(id)arg1;	// IMP=0x0000000000b49374
- (void)emojiSearchTextFieldWillBecomeInactive:(id)arg1;	// IMP=0x0000000000b49308
- (void)emojiSearchTextFieldDidBecomeActive:(id)arg1;	// IMP=0x0000000000b49292
- (void)emojiSearchTextFieldWillBecomeActive:(id)arg1;	// IMP=0x0000000000b49200
- (_Bool)cellShouldScrollWhenSelectedAtIndexPath:(id)arg1;	// IMP=0x0000000000b49060
- (_Bool)keySupportsVariants:(id)arg1;	// IMP=0x0000000000b48fe3
- (void)resetSelectionIfNeeded;	// IMP=0x0000000000b48f22
- (void)updateLastSeenItemForIndexPath:(id)arg1;	// IMP=0x0000000000b48dfa
- (void)preferencesControllerChanged:(id)arg1;	// IMP=0x0000000000b48dca
- (void)updateMemojiPreference;	// IMP=0x0000000000b48c08
- (void)updatePreferencesForSelectedEmoji:(id)arg1;	// IMP=0x0000000000b48a7c
- (long long)keyCodeForCurrentEnvironmentFromKeyCode:(long long)arg1;	// IMP=0x0000000000b48a3e
- (void)insertSelectedEmoji:(id)arg1 shouldDismissPopover:(_Bool)arg2;	// IMP=0x0000000000b4873f
- (void)updateHighlightForIndexPath:(id)arg1 scrollIfNeeded:(_Bool)arg2 animateScroll:(_Bool)arg3;	// IMP=0x0000000000b4854e
- (_Bool)handleSelectionEvent:(id)arg1;	// IMP=0x0000000000b4848f
- (_Bool)_handleBaseKeySelectionEvent:(id)arg1;	// IMP=0x0000000000b47f43
- (_Bool)_handleVariantSelectionEvent:(id)arg1;	// IMP=0x0000000000b47c89
- (_Bool)_handleInitialSelectionEvent:(id)arg1;	// IMP=0x0000000000b4799c
- (_Bool)handleKeyInputForFamilySelector:(id)arg1;	// IMP=0x0000000000b47074
- (_Bool)handleKeyInputForCollectionViewNavigation:(id)arg1;	// IMP=0x0000000000b46558
- (_Bool)handleKeyInputForVariantSelector:(id)arg1;	// IMP=0x0000000000b460dc
- (_Bool)handleKeyEvent:(id)arg1;	// IMP=0x0000000000b45f5a
- (long long)emojiCategoryTypeForSection:(long long)arg1;	// IMP=0x0000000000b45f03
- (_Bool)showingRecents;	// IMP=0x0000000000b45eb8
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000b45bd0
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000b45518
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000b4530a
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000b4528d
- (void)didDismissCardForKeyboardMediaController:(id)arg1;	// IMP=0x0000000000b45249
- (void)didPresentCardForKeyboardMediaController:(id)arg1;	// IMP=0x0000000000b45191
- (void)didInsertMediaForKeyboardMediaController:(id)arg1;	// IMP=0x0000000000b4514b
- (void)didTearDownRecentsViewForKeyboardMediaController:(id)arg1;	// IMP=0x0000000000b4507f
- (_Bool)_shouldShowRecentlyUsedMedia;	// IMP=0x0000000000b44fa4
- (void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b440ed
- (void)shouldDismissModalDisplayView:(id)arg1;	// IMP=0x0000000000b4408d
- (long long)didInputSubTree:(id)arg1;	// IMP=0x0000000000b43a41
- (id)selectedChildSkinToneEmoji:(id)arg1;	// IMP=0x0000000000b438e3
- (_Bool)genderEmojiBaseStringNeedVariantSelector:(id)arg1;	// IMP=0x0000000000b43868
- (id)treeForCell:(id)arg1;	// IMP=0x0000000000b41292
- (id)subTreeHitTest:(struct CGPoint)arg1;	// IMP=0x0000000000b41195
- (_Bool)baseStringIsCoupleEmoji:(id)arg1;	// IMP=0x0000000000b4106e
- (_Bool)skinToneWasUsedForEmoji:(id)arg1;	// IMP=0x0000000000b40ff7
- (id)emojiBaseString:(id)arg1;	// IMP=0x0000000000b40ef8
- (id)emojiBaseFirstCharacterString:(id)arg1;	// IMP=0x0000000000b40ec1
- (void)_setUserHasSelectedSkinToneEmoji:(_Bool)arg1;	// IMP=0x0000000000b40e74
- (_Bool)_userHasSelectedSkinToneEmoji;	// IMP=0x0000000000b40de1
- (void)dimKeys:(id)arg1;	// IMP=0x0000000000b40c61
- (void)setContentScaleFactor:(double)arg1;	// IMP=0x0000000000b40c0b
- (void)dealloc;	// IMP=0x0000000000b40ac7
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x0000000000b40ab2
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 screenTraits:(id)arg4;	// IMP=0x0000000000b401e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

