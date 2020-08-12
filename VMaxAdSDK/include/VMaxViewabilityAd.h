//
//  VMaxViewabilityAd.h


#ifndef VMaxViewabilityAd_h
#define VMaxViewabilityAd_h

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <Foundation/Foundation.h>
#import "VMaxViewabilityTracker.h"

@protocol VMaxViewabilityAd <NSObject>

@required
- (void)createViewabilityInstance;

@optional
@property(nonatomic,weak) id mediaselector;
//MOAT webview Display_123rrr
- (void)registerDisplayAd:(UIWebView *)webView;
- (void)displayStartTracking;
- (void)displayStopTracking;

//MOAT Native Video
- (void)startVastAdSessionUsingDictionary:(NSDictionary *)dictionaryValue;
- (void)endVastAdSession;

// MOAT_CUSTOM_LAYER_

//MOAT Native Display
- (void)registerNativeAdSessionUsingDictionary:(NSDictionary *)adDictionary andView:(UIView *)adView;
- (void)startNativeAdTracking;
- (void)endNativeAdTracking;

////IAS Display
//- (void)registerDisplayAdInWebview:(UIWebView *)webView withObstruction:(UIView *)friendlyObstruction;
//- (void)displayAdRecordReadyEvent;
//- (void)endDisplayAdSession;
//
////IAS VAST
//- (void)startVastAdSessionUSingIASDictionary:(NSDictionary *)IASDictionary;
//- (void)recordVastEventWithEvent:(NSString *)eventString;
//- (void)endVastAdSessions;


-(void)createReactiveVideoTrackerWithDict:(NSMutableDictionary *)adDictionary;
-(void)dispatchVolumeChangeEvent:(VOLUME_EVENTS)volState;
// OM

-(void)activateOMSDK;
- (void)endDisplayAdSession;
-(void)startVastAdSession :(AVPlayer *)avplayer andview:(UIView *)playerView andVendorKey:(NSString *)strVendorKey andVerificationParam:(NSString *)strVerificationParam andResourceURL:(NSString *)strResourceURL andJSServiceContent:(NSString *)strJSServiceContent andDelay:(int *)delay andisFullscreenAd:(Boolean *)isFullscreenAd andfriendlyObstructions:(NSMutableArray *)friendlyObstructions;
- (void)endVastAdSessionOM;
-(void)recordVastEvent :(NSString *)strEvent;
-(void)startNativeAdSession :(UIView *)adview andVendorKey:(NSString *)strVendorKey andVerificationParam:(NSString *)strVerificationParam andResourceURL:(NSString *)strResourceURL andJSServiceContent:(NSString *)strJSServiceContent;
-(void)endNativeAdSession;
-(void)registerDisplayAd :(UIWebView *)webView andview:(UIView *)playerView andfriendlyObstructions:(NSMutableArray *)friendlyObstructions;
-(void)registerNativeAdView:(UIView *)adview;
-(void)registerDisplayAdFriendlyObstruction : (UIView *)friendlyObstructions;
-(void)startVastAdSessionMainAdview;
//..
@end

#endif /* VMaxViewabilityAd_h */