//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AutocompleteClientSource : NSObject
{
}

+ (id)autocompleteClientSourceAppIconWithType:(long long)arg1;	// IMP=0x0040000000283bf8
+ (id)autocompleteClientSourceTitleWithType:(long long)arg1 contactName:(id)arg2;	// IMP=0x0010000000283979
+ (id)autocompleteClientSourceTitleWithType:(long long)arg1;	// IMP=0x0010000000283965
+ (_Bool)itemIsMarkedLocation:(id)arg1;	// IMP=0x00100000002838fb
+ (_Bool)itemIsFromMessages:(id)arg1;	// IMP=0x00000000002838a1
+ (_Bool)itemIsFromMail:(id)arg1;	// IMP=0x0010000000283847
+ (_Bool)itemIsRecentPlace:(id)arg1;	// IMP=0x00100000002837b0
+ (_Bool)itemIsRecentSearch:(id)arg1;	// IMP=0x0010000000283756
+ (long long)autocompleteClientSourceTypeWithItem:(id)arg1;	// IMP=0x001000000028369c

@end
