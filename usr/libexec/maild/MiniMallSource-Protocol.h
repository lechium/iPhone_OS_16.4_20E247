//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MFMailMessageStoreSearchResult, MFMailboxUid, MFMessageCriterion, MISSING_TYPE, MailAccount, NSArray, NSSet, SourceSearchContext;

@protocol MiniMallSource <NSObject>
@property(getter=isProtectedDataAvailable) _Bool protectedDataAvailable;
- (MISSING_TYPE *)copyMessagesWithRemoteIDs:options:inMailbox: /* Error: Ran out of types for this method. */;
- (NSArray *)copyMessagesWithRemoteIDs:(NSSet *)arg1 options:(unsigned int)arg2;
- (MFMailMessageStoreSearchResult *)storeSearchResultUsingSearchContext:(SourceSearchContext *)arg1 limit:(unsigned long long)arg2 error:(id *)arg3;
- (MFMessageCriterion *)equivalentCriterion;
- (_Bool)canFetchSearchResults;
- (MailAccount *)accountForAutoFetch;
- (NSSet *)mailboxUids;
- (unsigned long long)type;
- (_Bool)supportsSearch;
- (int)correspondingType;
- (_Bool)representsMailboxUidType:(int)arg1;
- (_Bool)representsMailboxUid:(MFMailboxUid *)arg1;
- (_Bool)shouldGrowFetchWindow;
- (_Bool)shouldCompactOnFetch;
- (_Bool)needsFetch;
- (void)close;
- (void)open;
@end
