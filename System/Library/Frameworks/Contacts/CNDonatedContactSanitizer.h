//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNDonatedContactSanitizer : NSObject
{
}

+ (id)storeInfoFromPredicate:(id)arg1;	// IMP=0x00800000000baa18
+ (id)storeInfoByMergingStoreInfos:(id)arg1;	// IMP=0x00800000000ba955
+ (void)markContactAndMultiValuesAsDonated:(id)arg1 usingStoreInfo:(id)arg2 andStoreIdentifier:(id)arg3;	// IMP=0x00800000000ba5e6
+ (id)mutableCopyOfDonatedContact:(id)arg1 withCustomIdentifier:(id)arg2;	// IMP=0x00800000000ba37a
+ (id)sanitizeDonatedContact:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00800000000ba0b1

@end
