//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKShareParticipant.h>

@class NSSet, NSString;

@interface CKShareParticipant (IC)
+ (id)ic_mentionableNamesCache;	// IMP=0x002000000006b777
+ (unsigned long long)ic_mentionTokensPerParticipant;	// IMP=0x002000000006b47f
+ (id)ic_nonCurrentUserParticipants:(id)arg1;	// IMP=0x002000000006b44b
+ (id)ic_participantsWithDisplayableNames:(id)arg1 maximumNamesCount:(unsigned long long)arg2;	// IMP=0x002000000006b210
+ (id)ic_displayableNames:(id)arg1 maximumNamesCount:(unsigned long long)arg2;	// IMP=0x002000000006b1a4
+ (id)ic_shortParticipantNameOrFallbackForUserRecordName:(id)arg1 note:(id)arg2;	// IMP=0x002000000006b0e9
+ (id)ic_participantNameOrFallbackForUserRecordName:(id)arg1 note:(id)arg2;	// IMP=0x002000000006b02e
+ (id)ic_participantFallbackNameForUserRecordName:(id)arg1 note:(id)arg2;	// IMP=0x002000000006af62
- (id)ic_userRecordNameInNote:(id)arg1;	// IMP=0x001000000006d172
@property(readonly, copy, nonatomic) NSString *ic_activityStreamDisplayName;
- (id)ic_participantNameMatchingString:(id)arg1 returnFullName:(_Bool)arg2;	// IMP=0x001000000006c436
@property(readonly, copy, nonatomic) NSString *ic_cachedDisplayNameFromContacts;
@property(readonly, copy, nonatomic) NSSet *ic_mentionableNamesFromContacts;
@property(readonly, copy, nonatomic) NSSet *ic_mentionTokensFromContacts;
@property(readonly, copy, nonatomic) NSSet *ic_mentionTokens;
@property(readonly, nonatomic) NSString *ic_phoneNumber;
@property(readonly, nonatomic) NSString *ic_emailAddress;
@property(readonly, nonatomic) NSString *ic_shortParticipantName;
@property(readonly, nonatomic) NSString *ic_participantName;
@end
