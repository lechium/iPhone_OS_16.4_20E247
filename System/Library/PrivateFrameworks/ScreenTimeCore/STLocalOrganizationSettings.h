//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "STCoreOrganizationSettings.h"

@class NSString, STLocalOrganization;

__attribute__((visibility("hidden")))
@interface STLocalOrganizationSettings : STCoreOrganizationSettings
{
}

- (void)setPasscode:(id)arg1;	// IMP=0x00000000000354e5
- (id)dictionaryRepresentation;	// IMP=0x00000000000353b7
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000034f2b

// Remaining properties
@property(retain, nonatomic) STLocalOrganization *organization; // @dynamic organization;
@property(copy, nonatomic) NSString *recoveryAltDSID; // @dynamic recoveryAltDSID;

@end

