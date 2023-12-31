//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKit/NSObject-Protocol.h>

@class NSArray, NSString, NTKCFaceDetailComplicationSectionController, NTKComplication;

@protocol NTKCFaceDetailComplicationSectionDelegate <NSObject>
- (void)complicationSection:(NTKCFaceDetailComplicationSectionController *)arg1 wantsToPresentPickerForSlot:(NSString *)arg2 selectedComplication:(NTKComplication *)arg3;
- (void)complicationSection:(NTKCFaceDetailComplicationSectionController *)arg1 didChangeToComplication:(NTKComplication *)arg2 forSlot:(NSString *)arg3;
- (NSArray *)complicationSection:(NTKCFaceDetailComplicationSectionController *)arg1 allowedComplicationsForSlot:(NSString *)arg2;
@end

