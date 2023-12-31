//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EFMutableInt64Set, EFQuery, MFMessageCriterion, NSArray, NSDate, NSSet, NSString;
@protocol EDRemoteSearchDelegate;

@interface SourceSearchContext : NSObject
{
    _Bool _shouldSearchAllMail;	// 8 = 0x8
    _Bool _shouldSkipLocalSearch;	// 9 = 0x9
    _Bool _shouldSkipRemoteSearch;	// 10 = 0xa
    _Bool _shouldSuppressErrors;	// 11 = 0xb
    NSString *_searchText;	// 16 = 0x10
    NSArray *_searchTerms;	// 24 = 0x18
    MFMessageCriterion *_criterion;	// 32 = 0x20
    CDUnknownBlockType _shouldStopSearching;	// 40 = 0x28
    double _timeoutDelay;	// 48 = 0x30
    id <EDRemoteSearchDelegate> _delegate;	// 56 = 0x38
    EFQuery *_query;	// 64 = 0x40
    NSSet *_currentMailboxes;	// 72 = 0x48
    NSDate *_offset;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000da45f
@property(retain, nonatomic) NSDate *offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSSet *currentMailboxes; // @synthesize currentMailboxes=_currentMailboxes;
@property(copy, nonatomic) EFQuery *query; // @synthesize query=_query;
@property(nonatomic) __weak id <EDRemoteSearchDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double timeoutDelay; // @synthesize timeoutDelay=_timeoutDelay;
@property(nonatomic) _Bool shouldSuppressErrors; // @synthesize shouldSuppressErrors=_shouldSuppressErrors;
@property(nonatomic) _Bool shouldSkipRemoteSearch; // @synthesize shouldSkipRemoteSearch=_shouldSkipRemoteSearch;
@property(nonatomic) _Bool shouldSkipLocalSearch; // @synthesize shouldSkipLocalSearch=_shouldSkipLocalSearch;
@property(nonatomic) _Bool shouldSearchAllMail; // @synthesize shouldSearchAllMail=_shouldSearchAllMail;
@property(copy, nonatomic) CDUnknownBlockType shouldStopSearching; // @synthesize shouldStopSearching=_shouldStopSearching;
@property(retain, nonatomic) MFMessageCriterion *criterion; // @synthesize criterion=_criterion;
@property(copy, nonatomic) NSArray *searchTerms; // @synthesize searchTerms=_searchTerms;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(readonly, copy, nonatomic) EFMutableInt64Set *referencedConversations;
@property(readonly, copy, nonatomic) NSArray *referencedMailboxes;
- (unsigned long long)hash;	// IMP=0x00100000000da249
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000d9fb3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d9e18
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d9cb3
- (id)description;	// IMP=0x00100000000d9bc6

@end

