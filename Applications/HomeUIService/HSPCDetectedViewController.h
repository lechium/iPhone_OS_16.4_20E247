//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HSPCDetectedViewController
{
    _Bool _firstDetectedCard;	// 8 = 0x8
}

+ (id)viewControllerForCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x004000000001288c
@property(readonly, nonatomic, getter=isFirstDetectedCard) _Bool firstDetectedCard; // @synthesize firstDetectedCard=_firstDetectedCard;
- (id);	// IMP=0x001000000001334c
@property(readonly, nonatomic) NSString *prominentButtonLocalizedTitle;
- (id)iconDescriptor;	// IMP=0x00100000000130c1
- (id)handleInstallationGuideURL;	// IMP=0x0010000000013013
- (id)initWithCenterContentView:(id)arg1;	// IMP=0x0010000000012fe4
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x0010000000012a49

@end

