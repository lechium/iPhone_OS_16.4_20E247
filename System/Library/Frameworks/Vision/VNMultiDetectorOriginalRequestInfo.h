//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNMultiDetectorOriginalRequestInfo : NSObject
{
    NSString *_originatingRequestSpecifierKey;	// 8 = 0x8
    unsigned long long _originalRequestResultsIndex;	// 16 = 0x10
}

+ (id)requestClassNameFromRequestKey:(id)arg1;	// IMP=0x004000000005b0e9
+ (id)requestKeyFromRequest:(id)arg1;	// IMP=0x004000000005b086
+ (id)originatingRequestSpecifierToDetectorClassMap;	// IMP=0x004000000005afac
- (void).cxx_destruct;	// IMP=0x000000000005af9c
@property(readonly, nonatomic) unsigned long long originalRequestResultsIndex; // @synthesize originalRequestResultsIndex=_originalRequestResultsIndex;
@property(readonly, nonatomic) NSString *originatingRequestSpecifierKey; // @synthesize originatingRequestSpecifierKey=_originatingRequestSpecifierKey;
- (id)description;	// IMP=0x000000000005af44
- (id)initWithOriginatingRequestSpecifierProcessingOptionKey:(id)arg1 originalRequestResultsIndex:(unsigned long long)arg2;	// IMP=0x000000000005ae8b

@end

