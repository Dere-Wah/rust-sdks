#include "livekit/utils.h"

#include "api/peer_connection_interface.h"

namespace livekit {

lkRtcError toRtcError(const webrtc::RTCError& error) {
  lkRtcError err{};
  err.message = error.message();
  return err;
}

webrtc::PeerConnectionInterface::RTCOfferAnswerOptions
toNativeOfferAnswerOptions(const lkOfferAnswerOptions& options) {
  webrtc::PeerConnectionInterface::RTCOfferAnswerOptions nativeOptions{};
  nativeOptions.ice_restart = options.iceRestart;
  nativeOptions.use_rtp_mux = options.useRtpMux;
  return nativeOptions;
}

}  // namespace livekit
