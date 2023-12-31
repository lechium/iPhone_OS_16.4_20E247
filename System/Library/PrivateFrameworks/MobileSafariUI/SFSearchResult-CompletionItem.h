//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFSearchResult.h>

@class NSString, WBSQuerySuggestion;
@protocol CompletionItemActionHandler;

@interface SFSearchResult (CompletionItem)
- (void)didPerformCommand:(id)arg1;	// IMP=0x00200000000d571a
- (void)resultsDidBecomeVisible:(id)arg1;	// IMP=0x00200000000d5710
- (void)didEngageResult:(id)arg1;	// IMP=0x00200000000d5706
- (void)didEngageCardSection:(id)arg1;	// IMP=0x00200000000d56fc
- (void)cardViewDidAppear:(id)arg1;	// IMP=0x00200000000d56f2
- (void)safari_setCompletionIconForCompactRow:(long long)arg1;	// IMP=0x00200000000d5591
- (_Bool)isEquivalentTo:(id)arg1;	// IMP=0x00200000000d541e
@property(nonatomic) long long parsecQueryID;
@property(retain, nonatomic) id <CompletionItemActionHandler> handlerForActionItem;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (id)reflectedStringForUserTypedString:(id)arg1;	// IMP=0x00200000000d530b
- (id)completionTableViewCellReuseIdentifier;	// IMP=0x00200000000d52fe
@property(readonly, nonatomic) _Bool restoresSearchState;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;	// IMP=0x00200000000d529e
- (id)originalURLString;	// IMP=0x00200000000d51fd
- (id)userVisibleURLString;	// IMP=0x00200000000d515c
- (void)punchoutWithHandler:(id)arg1;	// IMP=0x00200000000d4afe
- (void)acceptCompletionWithActionHandler:(id)arg1;	// IMP=0x00200000000d4518
- (void)configureCompletionTableHeaderView:(id)arg1 forCompletionListGroup:(id)arg2;	// IMP=0x00200000000d43ba
@property(readonly, nonatomic) _Bool usesDefaultHeaderView;
@property(readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
- (id)completionTableHeaderView;	// IMP=0x00200000000d41be
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;	// IMP=0x00200000000d414c
- (id)completionTableViewCellForCompletionList:(id)arg1;	// IMP=0x00200000000d3fb9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property(readonly, nonatomic) _Bool needsSectionHeader;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property(readonly) Class superclass;
@end

