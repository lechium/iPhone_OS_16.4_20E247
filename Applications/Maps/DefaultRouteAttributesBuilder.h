//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedWaypoint, GEOCountryConfiguration, NSString;

@interface DefaultRouteAttributesBuilder : NSObject
{
    _Bool _useMetricSystem;	// 8 = 0x8
    GEOComposedWaypoint *_destinationWaypoint;	// 16 = 0x10
    GEOCountryConfiguration *_configuration;	// 24 = 0x18
    NSString *_voiceLanguageIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000b4cbe3
@property(readonly, nonatomic) _Bool useMetricSystem; // @synthesize useMetricSystem=_useMetricSystem;
@property(readonly, copy, nonatomic) NSString *voiceLanguageIdentifier; // @synthesize voiceLanguageIdentifier=_voiceLanguageIdentifier;
@property(readonly, nonatomic) GEOCountryConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) GEOComposedWaypoint *destinationWaypoint; // @synthesize destinationWaypoint=_destinationWaypoint;
- (void)fillRouteAttributes:(id)arg1;	// IMP=0x0010000000b4c9bf
- (id)initWithDestination:(id)arg1 countryConfiguration:(id)arg2 voiceLanguageIdentifier:(id)arg3 useMetricSystem:(_Bool)arg4;	// IMP=0x0010000000b4c8de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Error: Property attributes should begin with the type ('T') attribute, property name: description
// Property attributes: (null)

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
