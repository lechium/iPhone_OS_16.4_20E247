//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RoutePlanningFeatureDiscoveryProvider;

@interface RoutePlanningFeatureDiscoverOutlineSection
{
    RoutePlanningFeatureDiscoveryProvider *_featureDiscoveryProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000578bde
- (_Bool)isActive;	// IMP=0x0010000000578ba0
- (void)_requireReload;	// IMP=0x0010000000578b54
- (void)willDisplayCell:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x0010000000578aa5
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000578a02
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x00100000005789c1
- (long long)numberOfSections;	// IMP=0x00100000005789b6
- (void)setTransitPayActionDelegate:(id)arg1;	// IMP=0x0010000000578813
- (_Bool)updateWithTransportType:(long long)arg1 routeCollection:(id)arg2;	// IMP=0x00100000005787f6
- (id)listLayoutSectionConfigurationAtIndex:(long long)arg1 layoutEnvironment:(id)arg2;	// IMP=0x00100000005787a1
- (id)initWithCollectionView:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x0010000000578618

@end

