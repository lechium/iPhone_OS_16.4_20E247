//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNANFDDetectorCompoundRequestConfigurationGroups : NSObject
{
    NSMutableDictionary *_regionOfInterestConfigurations;	// 8 = 0x8
}

+ (id)createCompoundConfigurationHashKeyForRequest:(id)arg1 compoundRequestRevision:(unsigned long long)arg2;	// IMP=0x00600000002913a8
- (void).cxx_destruct;	// IMP=0x000000000028f31c
- (unsigned long long)count;	// IMP=0x000000000028f306
- (id)allConfigurations;	// IMP=0x000000000028f27e
- (id)configurationForRequest:(id)arg1;	// IMP=0x000000000028f0ed
- (id)init;	// IMP=0x000000000028f067

@end
