//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/UITextFieldDelegate-Protocol.h>

@class CKContextResult, NSString, UnifiedField;
@protocol CompletionItem;

@protocol UnifiedFieldDelegate <UITextFieldDelegate>
- (void)unifiedField:(UnifiedField *)arg1 didEngageWithQuerySuggestion:(CKContextResult *)arg2 forQueryString:(NSString *)arg3;
- (void)unifiedFieldDidUpdateUserTypedText:(UnifiedField *)arg1 forQueryString:(NSString *)arg2 didUpdateSuggestions:(_Bool)arg3;
- (void)unifiedFieldShouldPasteAndNavigate:(UnifiedField *)arg1;
- (void)unifiedField:(UnifiedField *)arg1 focusNextKeyView:(_Bool)arg2;
- (void)unifiedFieldSelectCompletionItemIfAvailable:(UnifiedField *)arg1;
- (void)unifiedField:(UnifiedField *)arg1 moveCompletionSelectionBySectionOffset:(long long)arg2;
- (void)unifiedField:(UnifiedField *)arg1 moveCompletionSelectionByRowOffset:(long long)arg2;
- (_Bool)unifiedFieldShouldMoveCompletionSelection:(UnifiedField *)arg1;
- (void)unifiedFieldReflectedItemDidChange:(UnifiedField *)arg1;
- (void)unifiedFieldExternalSearchDidEnd:(UnifiedField *)arg1;
- (void)unifiedFieldVoiceSearchStateDidChange:(UnifiedField *)arg1;
- (id <CompletionItem>)unifiedField:(UnifiedField *)arg1 topHitForText:(NSString *)arg2;
- (_Bool)unifiedField:(UnifiedField *)arg1 shouldWaitForTopHitForText:(NSString *)arg2;
- (void)unifiedField:(UnifiedField *)arg1 didEndEditingWithParsecTopHit:(id <CompletionItem>)arg2;
- (void)unifiedField:(UnifiedField *)arg1 didEndEditingWithSearch:(NSString *)arg2;
- (void)unifiedField:(UnifiedField *)arg1 didEndEditingWithAddress:(NSString *)arg2;
- (void)unifiedField:(UnifiedField *)arg1 willUpdateUserTypedText:(NSString *)arg2 toText:(NSString *)arg3;
@end
