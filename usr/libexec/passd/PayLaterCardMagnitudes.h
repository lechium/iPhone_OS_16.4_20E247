//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterCardMagnitudes
{
}

+ (id)_commonDictionaryForMagnitudes:(id)arg1;	// IMP=0x0040000000105dcc
+ (id)_propertySettersForMagnitudes;	// IMP=0x0010000000105a23
+ (id)_predicateForAccountIdentifier:(id)arg1;	// IMP=0x0010000000105a00
+ (id)magnitudesForAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000010576f
+ (void)deleteMagnitudesForAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001056d6
+ (id)insertOrUpdateMagnitudes:(id)arg1 forAccountIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001055dc
+ (id)databaseTable;	// IMP=0x0010000000105504
- (void)updateWithMagnitudes:(id)arg1;	// IMP=0x0040000000105986
- (id)magnitudes;	// IMP=0x0010000000105819
- (id)initWithMagnitudes:(id)arg1 forAccountIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000105511

@end
