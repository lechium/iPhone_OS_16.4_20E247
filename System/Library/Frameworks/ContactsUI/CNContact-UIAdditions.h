//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContact.h>

@class NSArray, NSData, NSString;

@interface CNContact (UIAdditions)
+ (unsigned long long)rawImageTypeForIdentifier:(id)arg1;	// IMP=0x002000000015bf83
+ (id)stringIdentifierForImageType:(unsigned long long)arg1;	// IMP=0x002000000015bf50
+ (id)contactWithStateRestorationCoder:(id)arg1 store:(id)arg2 keys:(id)arg3;	// IMP=0x002000000015be77
+ (id)multiValuePropertiesSupportingPredicateValidation;	// IMP=0x002000000015be47
+ (id)calendarForBirthdayLabel:(id)arg1;	// IMP=0x002000000015bdd7
+ (id)descriptorForAllUIKeys;	// IMP=0x002000000015bda7
+ (_Bool)nameAndPhotoSharingDebugUIEnabled;	// IMP=0x002000000015bd7c
+ (_Bool)downtimeWhitelistUIEnabled;	// IMP=0x002000000015bd51
+ (_Bool)settableMeCardEnabled;	// IMP=0x002000000015bd26
+ (_Bool)geminiEnabled;	// IMP=0x002000000015bcfb
+ (_Bool)quickActionsEnabled;	// IMP=0x002000000015bcd0
+ (_Bool)suggestionsShownInEditMode;	// IMP=0x002000000015bca5
+ (_Bool)suggestionsEnabled;	// IMP=0x002000000015bc7a
- (id)copyWithCuratingBirthdaySuggestion;	// IMP=0x001000000015b917
- (id)copyWithCuratingAllSuggestionsAndBirthdaySuggestion;	// IMP=0x001000000015b8db
- (_Bool)hasImageOfType:(unsigned long long)arg1;	// IMP=0x001000000015b800
- (unsigned long long)rawImageType;	// IMP=0x001000000015b7a2
@property(readonly, nonatomic) NSData *vCardRepresentation;
- (id)validPropertiesByEvaluatingPredicate:(id)arg1 onMultiValueProperties:(id)arg2;	// IMP=0x001000000015b28e
@property(readonly, nonatomic) NSArray *birthdays;
@property(readonly, nonatomic) NSString *personName;
@property(readonly, nonatomic) _Bool supportsInstantMessageService;
@property(readonly, nonatomic) _Bool hasNonPersistedData;
@property(readonly, nonatomic, getter=isUnknown) _Bool unknown;
@end
