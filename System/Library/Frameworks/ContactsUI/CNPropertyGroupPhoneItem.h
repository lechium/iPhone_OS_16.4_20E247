//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPropertyGroupItem.h"

@class CNPhoneNumber;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupPhoneItem : CNPropertyGroupItem
{
}

+ (id)emptyValueForLabel:(id)arg1;	// IMP=0x006000000017c6d9
- (id)valueForDisplayString:(id)arg1;	// IMP=0x000000000017c6c0
- (id)displayStringForValue:(id)arg1;	// IMP=0x000000000017c646
- (id)bestLabel:(id)arg1;	// IMP=0x000000000017c49a
- (id)defaultActionURL;	// IMP=0x000000000017c213
- (id)normalizedValue;	// IMP=0x000000000017c1c3
@property(readonly, nonatomic) CNPhoneNumber *phoneNumber;

@end

