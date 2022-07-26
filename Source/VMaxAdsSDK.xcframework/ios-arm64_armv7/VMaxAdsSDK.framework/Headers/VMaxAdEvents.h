//
//  VmaxAdEvents.h
//  VMaxAdSDK
//
//  Created by Cloy Monis on 06/09/21.
//  Copyright © 2021 Vserv.mobi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VmaxAdInfo.h"

NS_ASSUME_NONNULL_BEGIN

@protocol VMaxAdEvents <NSObject>

-(void)onAdEventInit;
-(void)onAdEventReady:(VmaxAdInfo*)vmaxAdInfo;
-(void)onAdEventError:(VmaxAdInfo*)vmaxAdInfo error:(NSError *)error;
-(void)onAdEventRender:(VmaxAdInfo*)vmaxAdInfo;
-(void)onAdEventImpression:(VmaxAdInfo*)vmaxAdInfo;
-(void)onAdEventMediaStart:(VmaxAdInfo*)vmaxAdInfo;
-(void)onAdEventMediaFirstQuartile:(VmaxAdInfo*)vmaxAdInfo;
-(void)onAdEventMediaMidPoint:(VmaxAdInfo*)vmaxAdInfo;
-(void)onAdEventMediaThirdQuartile:(VmaxAdInfo*)vmaxAdInfo;
-(void)onAdEventMediaEnd:(VmaxAdInfo*)vmaxAdInfo;
-(void)onAdEventMediaExpand:(VmaxAdInfo*)vmaxAdInfo;
-(void)onAdEventMediaCollapse:(VmaxAdInfo*)vmaxAdInfo;
-(void)onAdEventClick:(VmaxAdInfo*)vmaxAdInfo;
-(void)onAdEventSkip:(VmaxAdInfo*)vmaxAdInfo;
-(void)onAdEventClose:(VmaxAdInfo*)vmaxAdInfo;
-(void)onAdEventPause:(VmaxAdInfo*)vmaxAdInfo;
-(void)onAdEventResume:(VmaxAdInfo*)vmaxAdInfo;
-(void)onAdEventMediaBitrateChange:(float)indicatedBitrate;
-(void)onAdEventTapped:(VmaxAdInfo*)vmaxAdInfo;
-(void)onAdEventMediaProgress:(NSInteger)currentDuration withTotalDuration:(NSInteger)totalDuration;

@end

@protocol VMaxCompanionAdEvents <NSObject>

- (void)onCompanionReady:(NSString*)adSlotId;
- (void)onCompanionRender:(NSString*)adSlotId;
- (void)onCompanionError:(NSString*)adSlotId;
- (void)onCompanionClose:(NSString*)adSlotId;
- (void)onCompanionClick:(NSString*)adSlotId;
- (void)onCompanionSkip:(NSString*)adSlotId;
- (void)onCompanionComplete:(NSString*)adSlotId;

@end

NS_ASSUME_NONNULL_END

