//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/SBLeafIconDataSource-Protocol.h>

@class NSString;

@protocol SBHApplicationPlaceholder <SBLeafIconDataSource>
@property(readonly, copy, nonatomic) NSString *applicationDisplayName;
@property(readonly, copy, nonatomic) NSString *applicationBundleIdentifier;

@optional
@property(readonly, nonatomic, getter=isNewAppInstallFromStore) _Bool newAppInstallFromStore;
@property(readonly, nonatomic, getter=isAppClip) _Bool appClip;
@property(readonly, nonatomic, getter=isCloudDemoted) _Bool cloudDemoted;
@property(readonly, nonatomic, getter=isPrioritizable) _Bool prioritizable;
@property(readonly, nonatomic, getter=isDownloading) _Bool downloading;
@property(readonly, nonatomic, getter=isInstalling) _Bool installing;
@property(readonly, nonatomic, getter=isCancelable) _Bool cancelable;
@property(readonly, nonatomic, getter=isFailed) _Bool failed;
@property(readonly, nonatomic, getter=isPausable) _Bool pausable;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic, getter=isWaiting) _Bool waiting;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (_Bool)cancel;
- (_Bool)resume;
- (_Bool)pause;
- (_Bool)prioritize;
@end

