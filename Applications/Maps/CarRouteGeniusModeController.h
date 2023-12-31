//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CarActionButtonsCardViewController, CarMapSettings, CarMapTrackingController, CarRouteGeniusDetailCardViewController, CarRouteGeniusSuggestionIconView, CarRouteGeniusSuggestionsCardViewController, GEOComposedRoute, NSArray, NSString, UIImage;

@interface CarRouteGeniusModeController
{
    GEOComposedRoute *_currentlyDisplayedRoute;	// 8 = 0x8
    NSArray *_closeButtonRedirectingFocusGuides;	// 16 = 0x10
    _Bool _isSuggestionCardFocused;	// 24 = 0x18
    _Bool _shouldRecenterOnRoute;	// 25 = 0x19
    CarMapTrackingController *_trackingController;	// 32 = 0x20
    unsigned long long _navigationType;	// 40 = 0x28
    UIImage *_currentSuggestionImage;	// 48 = 0x30
    CarRouteGeniusSuggestionsCardViewController *_suggestionsCard;	// 56 = 0x38
    CarRouteGeniusDetailCardViewController *_detailCard;	// 64 = 0x40
    CarRouteGeniusSuggestionIconView *_suggestionIconView;	// 72 = 0x48
    CarMapSettings *_zoomedSettings;	// 80 = 0x50
    CarActionButtonsCardViewController *_actionButtonsCardController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000b45a8e
@property(retain, nonatomic) CarActionButtonsCardViewController *actionButtonsCardController; // @synthesize actionButtonsCardController=_actionButtonsCardController;
@property(retain, nonatomic) CarMapSettings *zoomedSettings; // @synthesize zoomedSettings=_zoomedSettings;
@property(retain, nonatomic) CarRouteGeniusSuggestionIconView *suggestionIconView; // @synthesize suggestionIconView=_suggestionIconView;
@property(retain, nonatomic) CarRouteGeniusDetailCardViewController *detailCard; // @synthesize detailCard=_detailCard;
@property(retain, nonatomic) CarRouteGeniusSuggestionsCardViewController *suggestionsCard; // @synthesize suggestionsCard=_suggestionsCard;
@property(retain, nonatomic) UIImage *currentSuggestionImage; // @synthesize currentSuggestionImage=_currentSuggestionImage;
@property(nonatomic) unsigned long long navigationType; // @synthesize navigationType=_navigationType;
@property(nonatomic) _Bool shouldRecenterOnRoute; // @synthesize shouldRecenterOnRoute=_shouldRecenterOnRoute;
- (void)didUpdateRouteGenius:(id)arg1;	// IMP=0x0010000000b457d6
- (int)currentUsageTarget;	// IMP=0x0010000000b457cb
- (void)actionButtonsCard:(id)arg1 didSelectAction:(unsigned long long)arg2;	// IMP=0x0010000000b455b4
- (void)detailCardDidHandOff:(id)arg1;	// IMP=0x0010000000b45075
- (void)detailCardDidAccept:(id)arg1 navigationType:(unsigned long long)arg2;	// IMP=0x0010000000b44d83
- (void)_startNavigationIfNeededOrFail;	// IMP=0x0010000000b44cdc
@property(readonly) _Bool startNavWithETAOnly;
- (void)_updateCurrentSuggestionImage;	// IMP=0x0010000000b445e2
- (void)setCurrentSuggestion:(id)arg1;	// IMP=0x0010000000b443c2
- (void)_mapViewGestured;	// IMP=0x0010000000b44305
- (void)nudgerizer:(id)arg1 didGestureMapView:(id)arg2 inDirection:(long long)arg3;	// IMP=0x0010000000b442f3
- (void)incidentsReportingEnablementDidUpdate;	// IMP=0x0010000000b442a5
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000b44293
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;	// IMP=0x0010000000b4428d
- (void)recenterCameraOnRouteAnimated:(_Bool)arg1;	// IMP=0x0010000000b44176
- (_Bool)allowMapZoomAndRecentering;	// IMP=0x0010000000b44161
- (void)trackingController:(id)arg1 changedToForcedTrackingMode:(long long)arg2;	// IMP=0x0010000000b4409c
- (void)carCardViewCloseButtonTapped:(id)arg1;	// IMP=0x0010000000b43dae
- (void)handleHardwareBackButtonPressed;	// IMP=0x0010000000b43c31
- (_Bool)_zoomButtonPressed;	// IMP=0x0010000000b43baf
- (_Bool)zoomInButtonPressed;	// IMP=0x0010000000b43b9d
- (_Bool)zoomOutButtonPressed;	// IMP=0x0010000000b43b8b
- (_Bool)allowKnobNudgeMapPanning;	// IMP=0x0010000000b43b83
- (CDStruct_917cde60)mapControlsConfiguration;	// IMP=0x0010000000b43b11
- (void)_updateFocusGuides;	// IMP=0x0010000000b43a33
- (void)_tearDownFocusGuides;	// IMP=0x0010000000b4398d
- (void)_buildFocusGuidesIfNeeded;	// IMP=0x0010000000b4359b
- (void)carCardView:(id)arg1 didChangeFocus:(_Bool)arg2;	// IMP=0x0010000000b4357f
- (id)carFocusOrderSequences;	// IMP=0x0010000000b43422
- (id)preferredCarFocusEnvironments;	// IMP=0x0010000000b4330d
- (id)suggestionCardView;	// IMP=0x0010000000b43228
- (id)_detailCardTitle;	// IMP=0x0010000000b43082
- (void)_dismissDetailCard;	// IMP=0x0010000000b42fe1
- (void)_presentRoutePlanningForCurrentSuggestion;	// IMP=0x0010000000b42ebb
- (void)_suggestionsCardTapped;	// IMP=0x0010000000b42d5f
- (void)chromeDidEndConfiguringCards:(id)arg1;	// IMP=0x0010000000b42cea
- (void)chromeDidStartConfiguringCards:(id)arg1;	// IMP=0x0010000000b42c82
- (void)configureCard:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000b42512
- (id)desiredCards;	// IMP=0x0010000000b423ce
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000b42288
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000b41ab8
- (_Bool)shouldTimeoutAfterDisconnect;	// IMP=0x0010000000b41ab0
- (_Bool)shouldAccessoriesModifyMapInsets;	// IMP=0x0010000000b41aa8
- (void)hideAutohidingContentWithAnimation:(id)arg1;	// IMP=0x0010000000b41a57
- (void)showAutohidingContentWithAnimation:(id)arg1;	// IMP=0x0010000000b419e6
- (long long)autohideBehavior;	// IMP=0x0010000000b419db
- (long long)accessoriesHidingBehavior;	// IMP=0x0010000000b419d0
- (_Bool)showsHeadingIndicator;	// IMP=0x0010000000b419c8
- (_Bool)showsMapView;	// IMP=0x0010000000b419c0
- (void)_startNavigation;	// IMP=0x0010000000b414be
- (void)_updateTraffic;	// IMP=0x0010000000b4140a
- (void)_updateForCurrentRoute;	// IMP=0x0010000000b40e17
- (void)_updateHardwareBackButtonBehavior;	// IMP=0x0010000000b40da3
- (_Bool)_needsCardUpdateForTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0010000000b40d58
- (void)setState:(long long)arg1;	// IMP=0x0010000000b40c9a
- (id)trackingController;	// IMP=0x0010000000b40c45
- (id)mapView;	// IMP=0x0010000000b40bf5
- (id)initWithSuggestion:(id)arg1;	// IMP=0x0010000000b40b0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

