//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlayUIServices/CRSUIClusterWindow.h>

@class CarInstrumentClusterChromeConfiguration, NSString;
@protocol CarInstrumentClusterConfigurationDelegate, CarInstrumentClusterWindowZoomDelegate;

@interface CarInstrumentClusterWindow : CRSUIClusterWindow
{
    CarInstrumentClusterChromeConfiguration *_chromeConfiguration;	// 8 = 0x8
    id <CarInstrumentClusterConfigurationDelegate> _configurationDelegate;	// 16 = 0x10
    id <CarInstrumentClusterWindowZoomDelegate> _zoomDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000133de2
@property(nonatomic) __weak id <CarInstrumentClusterWindowZoomDelegate> zoomDelegate; // @synthesize zoomDelegate=_zoomDelegate;
@property(nonatomic) __weak id <CarInstrumentClusterConfigurationDelegate> configurationDelegate; // @synthesize configurationDelegate=_configurationDelegate;
@property(retain, nonatomic) CarInstrumentClusterChromeConfiguration *chromeConfiguration; // @synthesize chromeConfiguration=_chromeConfiguration;
- (void)clusterWindow:(id)arg1 didZoomInDirection:(long long)arg2;	// IMP=0x0010000000133ca3
- (void)clusterWindow:(id)arg1 didChangeSpeedLimitSetting:(unsigned long long)arg2;	// IMP=0x0010000000133bc2
- (void)clusterWindow:(id)arg1 didChangeETASetting:(unsigned long long)arg2;	// IMP=0x0010000000133ae1
- (void)clusterWindow:(id)arg1 didChangeCompassSetting:(unsigned long long)arg2;	// IMP=0x0010000000133a00
- (void)_windowWantsToZoomInDirection:(long long)arg1;	// IMP=0x00100000001339b4
- (void)_updateChromeConfiguration;	// IMP=0x001000000013392f
- (id)_currentSceneSettings;	// IMP=0x0010000000133747
- (void)setRootViewController:(id)arg1;	// IMP=0x0010000000133324
- (id)initWithWindowScene:(id)arg1;	// IMP=0x00100000001332c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

