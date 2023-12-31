//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/NSObject-Protocol.h>

@class PRUIModalController, PRUIModalEntryPointResponse;

@protocol PRUIModalControllerDelegate <NSObject>

@optional
- (void)modalControllerDidDismissSheet:(PRUIModalController *)arg1;
- (void)modalController:(PRUIModalController *)arg1 didDismissSheetWithResponse:(PRUIModalEntryPointResponse *)arg2;
- (void)modalController:(PRUIModalController *)arg1 willDismissSheetWithResponse:(PRUIModalEntryPointResponse *)arg2;
@end

