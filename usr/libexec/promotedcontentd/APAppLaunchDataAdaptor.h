//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSNumber, NSSet;

@interface APAppLaunchDataAdaptor
{
    NSSet *_bundleIDs;	// 8 = 0x8
    NSNumber *_minCount;	// 16 = 0x10
    NSMutableDictionary *_foundBundleIDs;	// 24 = 0x18
}

+ (id)identifier;	// IMP=0x0040000000004d6a
- (void).cxx_destruct;	// IMP=0x0020000000005747
@property(retain, nonatomic) NSMutableDictionary *foundBundleIDs; // @synthesize foundBundleIDs=_foundBundleIDs;
@property(retain, nonatomic) NSNumber *minCount; // @synthesize minCount=_minCount;
@property(retain, nonatomic) NSSet *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void)_incrementBundleIDCount:(id)arg1;	// IMP=0x0010000000005573
- (void)eventReceived:(id)arg1;	// IMP=0x001000000000528e
- (id)calculateResultFromEvents;	// IMP=0x0010000000005073
- (id)createStreamWithStartDate:(id)arg1;	// IMP=0x0010000000004fee
- (_Bool)_validateParameters:(id *)arg1;	// IMP=0x0010000000004d77

@end

