//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSBrowserTabCompletionMatch.h>

@class NSString, SFSearchResult, WBSQuerySuggestion;
@protocol CompletionItemActionHandler;

@interface WBSBrowserTabCompletionMatch (SafariCompletionItem)
- (_Bool)isEquivalentTo:(id)arg1;	// IMP=0x0020000000081786
- (id)reflectedStringForUserTypedString:(id)arg1;	// IMP=0x0020000000081774
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;	// IMP=0x002000000008159c
- (id)completionTableViewCellReuseIdentifier;	// IMP=0x002000000008158f
- (id)completionTableViewCellForCompletionList:(id)arg1;	// IMP=0x0020000000081521
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;	// IMP=0x00200000000814c9
- (void)acceptCompletionWithActionHandler:(id)arg1;	// IMP=0x0020000000081415

// Remaining properties
@property(readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(retain, nonatomic) id <CompletionItemActionHandler> handlerForActionItem;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property(readonly, nonatomic) _Bool needsSectionHeader;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
@property(nonatomic) long long parsecQueryID;
@property(readonly, nonatomic) _Bool restoresSearchState;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool usesDefaultHeaderView;
@end

